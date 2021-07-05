// This file contains the implementation of Main's menu helper functions
// Author: Jamie Beamguard
// Last Revision: 6/21/2021

#include "menuHelpers.h"
#include <iostream>
#include <string>
#include "teamDatabase.h"
#include "team.h"

using namespace std;

// Will print the context menu in Main
void menuPrintHelper() {
	cout << "What would you like to do? (case sensitive)" << endl;
	cout << "A - Add a team" << endl;
	cout << "T - View all teams in the database" << endl;
	cout << "U - Update a game" << endl;
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
			// viewTeamStatsHelper();
			return 1;	// request success
		case 'U':	// User wants to update a game's results
			// updateGameHelper();
			return 1;	// request success
		case 'X':	// Exit the program
			cout << "Good-bye!" << endl;
			return 0;	// return 0 to exit the progran
		default:
			cout << endl << "Error: Please enter a valid character!" << endl << endl;
			return 1;	// go again
	};
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

void viewAllTeamsHelper(TeamDatabase& teamMap) {
	int i;

	cout << "All teams are as follows:" << endl;

	// use a for loop to print all team names
	for(i=0; i<teamMap.dbSize(); i++) {
		cout << teamMap.viewTeamName(i) << " (" << teamMap.viewTeamSeed(i) << ")" << endl;
	}

	cout << endl;

}
