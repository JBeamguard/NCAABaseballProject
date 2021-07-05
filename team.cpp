// This file contains the implementation of the team class
// Author: Jamie Beamguard
// Last Revision: 6/29/2021

#include <iostream>
#include "team.h"

using namespace std;

// Given the name, seed number, and ID number
Team::Team(string teamName, int teamSeed, int idNum) {
	name = teamName;
	seedNum = teamSeed;
	teamID = idNum;
}

// showWins prints the team's wins
void Team::showWins() {
	int i, tmpInt;
	string tmpString;

	cout << "Games Won: " << endl;
	if(gamesWon.empty()) {
		cout << "\tNo wins" << endl;
	} else {
		// use a loop to print the game number and opponent beaten
		for(i=0; i<gamesWon.size(); i++) {
			cout << "\tGame ";
			tmpInt =  gamesWon[i].printGameNum();
			cout << tmpInt << "; beat ";
			tmpString = gamesWon[i].printOpponent(name);
			cout << tmpString << endl;
		}
	}
}

// showLosses prints the team's losses
void Team::showLosses() {
	int i, tmpInt;
	string tmpString;

	cout << "Games Lost: " << endl;
	// if team is undefeated
	if(gamesLost.empty()) {
		cout << "\tTeam is undefeated!" << endl;
	} else {
		// use a loop to print the game number and opponent lost to
		for(i=0; i<gamesLost.size(); i++) {
			cout << "\tGame ";
			tmpInt = gamesLost[i].printGameNum();
			cout << tmpInt << "; lost to ";
			tmpString = gamesWon[i].printOpponent(name);
			cout << tmpString << endl;
		}
	}
}

// print the team's cumulative runs scored
void Team::printRuns() {
	cout << "Total Runs: " << totalRunsScored << endl;
}

// display the wins, losses, and runs
void Team::dispStats() {
	wins = gamesWon.size();
	losses = gamesLost.size();
	cout << "W/L" << wins << "/" << losses << endl;
	showWins();
	showLosses();
	printRuns();
}

// return the name of the team
string Team::teamName() {
	return name;
}

int Team::teamSeed() {
	return seedNum;
}

// return the team's ID number
int Team::getID() {
	return teamID;
}
