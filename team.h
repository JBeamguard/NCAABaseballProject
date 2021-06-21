#ifndef TEAM_H
#define TEAM_H

// Header file for the team class
// Author: Jamie Beamguard
// Last Revision: 6/21/2021

#include <string>

namespace team {
	class Team {
	public:
		void updateTeam();
		void dispStats();
		void showWins();
		void showLosses();
		void printRuns();
		std::string teamName();
		int printID();
	};
}

#endif // TEAM_H
