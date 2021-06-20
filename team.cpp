// This file contains the implementation of the team class
// Author: Jamie Beamguard
// Last Revision: 6/20/2021

#include "team.h"
#include <string>
#include <iostream>
#include <utility>
#include <vector>

using namespace team;
using namespace std;

class Team {
private:
	string teamName;
	int seedNum;
	vector<pair<int,string>> gamesWon;
	vector<pair<int,string>> gamesLost;
	int totalRunsScored;
public:
	Team(string name, int seed) {
		teamName = name;
		seedNum = seed;
	};

	void showWins() {
		int i;
		cout << "Games Won: " << endl;
		// use a loop to print the game number and opponent beaten
		for(i=0; i<gamesWon.size(); i++) {
			cout << "Game " << gamesWon[i].first;
			cout << ", beat " << gamesWon[i].second << endl;
		}
	};

	void showLosses() {
		int i;
		cout << "Games Lost: " << endl;
		// use a loop to print the game number and opponent lost to
		for(i=0; i<gamesLost.size(); i++) {
			cout << "Game " << gamesLost[i].first;
			cout << ", lost to " << gamesWon[i].second << endl;
		}
	};

	void printRuns() {
		cout << "Total Runs: " << totalRunsScored << endl;
	};
};
