#ifndef TEAMDATABASE_H
#define TEAMDATABASE_H

// Header file for the teamDatabase class
// Author: Jamie Beamguard
// Last Revision: 6/21/2021

#include "team.h"

namespace database
{
	class TeamDatabase {
	public:
		void insertTeam(team::Team newTeam);
		void removeTeam();
		void updateTeam();
	};
}

#endif // TEAMDATABASE_H
