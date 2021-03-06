#ifndef TEAM_H
#define TEAM_H

// Header file for the team class
// Author: Jamie Beamguard
// Last Revision: 7/6/2021

#include <string>
#include <vector>
#include "game.h"

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
	int totalRunsScored = 0;
public:
	Team(string, int, int);		// Team constructor
	~Team() = default;			// Default destructor
	void updateTeam();
	void dispStats();
	void showWins();
	void showLosses();
	void printRuns();
	string teamName();
	int teamSeed();
	int getID();
	void addWin(Game);
	void addLoss(Game);
	void addRuns(int runs);
};

#endif // TEAM_H
