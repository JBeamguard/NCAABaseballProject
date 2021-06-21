#ifndef GAME_H
#define GAME_H

// Header file for the game object
// Author: Jamie Beamguard
// Last Revision: 6/21/2021

#include <string>

using namespace std;

namespace game
{
	class Game {
	private:
		int homeScore;
		int awayScore;
		string homeTeam;
		string awayTeam;
		int gameNumber;
		string winningTeam;
	public:
		int printGameNum();								// print game number
		string printOpponent(string teamName);	// print opponent in game
	};
}

#endif // GAME_H
