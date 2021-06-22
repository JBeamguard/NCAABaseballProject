// This file contains the implementation of the team class
// Author: Jamie Beamguard
// Last Revision: 6/21/2021

#include <string>
#include <iostream>
#include <vector>
#include "team.h"
#include "game.h"

using namespace game;
using namespace std;

class Team {
private:
	int teamID;
	string name;
	int seedNum;
	int wins;
	int losses;
	vector<Game> gamesWon;		// vector of Game objects
	vector<Game> gamesLost;		// vector of Game objects
	int totalRunsScored;
public:
	Team(string inputName, int seed, int idNum) : name(inputName), seedNum(seed), teamID(idNum) {}
	// showWins prints the team's wins
	void showWins() {
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
	};
	// showLosses prints the team's losses
	void showLosses() {
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
	};
	// print the team's cumulative runs scored
	void printRuns() {
		cout << "Total Runs: " << totalRunsScored << endl;
	};
	// display the wins, losses, and runs
	void dispStats() {
		wins = gamesWon.size();
		losses = gamesLost.size();
		cout << "W/L" << wins << "/" << losses << endl;
		showWins();
		showLosses();
		printRuns();
	};
	// return the name of the team
	string teamName() {
		return name;
	}
	// return the team's ID number
	int printID() {
		return teamID;
	}
};
