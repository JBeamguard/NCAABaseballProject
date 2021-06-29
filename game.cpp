// File contains the implementation of the game class
// Author: Jamie Beamguard
// Last Revision: 6/29/2021

#include "game.h"
#include <string>
#include <iostream>

using namespace std;

// Return the opposing team's name
string Game::printOpponent(string teamName) {
	if(teamName == homeTeam) {
		return awayTeam;		// if home team, return away team name
	}

	return homeTeam;			// if away team, return home team name
}

// Return the number of the game
int Game::printGameNum() {
	return gameNumber;	// return game number
}

// Constructor Definition
Game::Game(int num, string home, string away, int homeRuns = -1, int awayRuns = -1, string winner="TBD") {
	gameNumber = num;
	homeTeam = home;
	homeScore = homeRuns;
	awayTeam = away;
	awayScore = awayRuns;
	winningTeam = winner;
}
