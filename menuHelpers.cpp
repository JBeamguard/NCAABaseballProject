// This file contains the implementation of Main's menu helper functions
// Author: Jamie Beamguard
// Last Revision: 7/6/2021

#include "menuHelpers.h"
#include <iostream>
#include <string>
#include "teamDatabase.h"
#include "team.h"
#include "game.h"

using namespace std;

// Will print the context menu in Main
void menuPrintHelper() {
	cout << "What would you like to do? (case sensitive)" << endl;
	cout << "A - Add a team" << endl;
	cout << "T - View all teams in the database" << endl;
	cout << "G - Add a game's results" << endl;
	cout << "V - View a team's stats" << endl;
	cout << "X - Exit the program" << endl << endl;
}

// Used to help the context menu move to the next state in Main
int menuSelectorHelper(char userInput, TeamDatabase& teamMap) {
	switch(userInput) {
		case 'A':	// User wants to add a teams
			addTeamHelper(teamMap);
			return 1;	// request success
		case 'T':	// View all teams
			viewAllTeamsHelper(teamMap);
			return 1;
		case 'V':	// User wants to view a teams stats
			viewTeamStatsHelper(teamMap);
			return 1;	// request success
		case 'G':	// User wants to add a game's results
			insertGameHelper(teamMap);
			return 1;	// request success
		case 'X':	// Exit the program
			cout << endl << "Good-bye!" << endl;
			return 0;	// return 0 to exit the progran
		default:
			cout << endl << "Error: Please enter a valid character!" << endl << endl;
			return 1;	// go again
	};
}

// Used to insert a game's results into the database
void insertGameHelper(TeamDatabase& teamMap) {
	int gameNum, homeRuns, awayRuns, winnerKey, loserKey, winnerRuns, loserRuns;
	string homeName, awayName, winner, loser;

	// Gather needed data from user
	cout << "What was the game's number? ";
	cin >> gameNum;
	cout << endl << "Who was the home team? ";
	cin >> homeName;
	cout << endl << "Their runs? ";
	cin >> homeRuns;
	cout << endl << "Who was the away team? ";
	cin >> awayName;
	cout << endl << "Their runs? ";
	cin >> awayRuns;

	// calculate the winner and loser
	if(homeRuns > awayRuns) {		// Home team scored more runs
		winner = homeName;
		winnerRuns = homeRuns;
		loser = awayName;
		loserRuns = awayRuns;
	} else {								// Away team scored more runs
		winner = awayName;
		winnerRuns = awayRuns;
		loser = homeName;
		loserRuns = homeRuns;
	}

	// Create new game object with user data
	Game game(gameNum, homeName, awayName, homeRuns, awayRuns, winner);

	winnerKey = getTeamKey(winner, teamMap);
	loserKey = getTeamKey(loser, teamMap);

	// Add game to respective teams and then increase their total runs
	teamMap.at(winnerKey).addWin(game);	// Add game to the winning team
	teamMap.at(loserKey).addLoss(game);	// Add game to the losing team

	teamMap.at(winnerKey).addRuns(winnerRuns);
	teamMap.at(loserKey).addRuns(loserRuns);

	cout << "Game added successfully." << endl << endl;
}

// Displays the stats for a specific team
void viewTeamStatsHelper(TeamDatabase& teamMap) {
	string userTeam;
	int key = -1;

	cout << endl << "Which team?" << endl;
	cin >> userTeam;

	key = getTeamKey(userTeam, teamMap);

	if(key == -1) {		// If team is not in database
		cout << endl << userTeam << " is not in the database." << endl << endl;
	} else {
		cout << userTeam << " stats are as follows:" << endl;
		teamMap.at(key).dispStats();	// display the team stats
	}
}

// Used to check if the team is present in the database
int getTeamKey(string team, TeamDatabase& teamMap) {
	int i;
	int key = -1;

	for(i=0; i<teamMap.dbSize(); i++) {
		if(teamMap.at(i).teamName() == team) {		// If the team has been found
			key = i;
			return key;										// return the key of the team
		}
	}

	return key;		// Will return -1 if team is not found
}

// Used to add a team to the main database
void addTeamHelper(TeamDatabase& teamMap) {
	string name;
	int seed;
	int id;

	// Gather the needed information
	cout << endl << "Enter team name: ";
	cin >> name;
	cout << endl << "Enter seed number: ";
	cin >> seed;
	cout << endl;

	if(!teamMap.dbSize()) {				// If first team, ID = 0
		id = 0;
	} else {
		id = teamMap.dbSize();		// Else generate the ID Number
	}

	Team newTeam(name, seed, id);		// instance a Team item using info

	teamMap.insertTeam(newTeam);		// insert the new team item

	cout << "Team added successfully." << endl << endl;
}

// Print all teams in the database
void viewAllTeamsHelper(TeamDatabase& teamMap) {
	int i;

	cout << "All teams are as follows:" << endl;

	// use a for loop to print all team names
	for(i=0; i<teamMap.dbSize(); i++) {
		cout << teamMap.viewTeamName(i) << " (" << teamMap.viewTeamSeed(i) << ")" << endl;
	}

	cout << endl;

}
