// File contains the implementation of the game class
// Author: Jamie Beamguard
// Last Revision: 6/21/2021

#include "game.h"
#include <string>
#include <iostream>

using namespace std;
using namespace game;

class Game {
private:
	int homeScore = -1;
	int awayScore = -1;
	string homeTeam;
	string awayTeam;
	int gameNumber;
	string winningTeam;
public:
	Game(int num, string home, string away, int homeRuns = -1, int awayRuns = -1, string winner="TBD") {
		gameNumber = num;
		homeTeam = home;
		homeScore = homeRuns;
		awayTeam = away;
		awayScore = awayRuns;
		winningTeam = winner;
	}

	int printGameNum() {
		return gameNumber;	// return game number
	}

	string printOpponent(string teamName) {
		if(teamName == homeTeam) {
			return awayTeam;		// if home team, return away team name
		}

		return homeTeam;			// if away team, return home team name
	}
};
