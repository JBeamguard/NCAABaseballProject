#ifndef TEAMDATABASE_H
#define TEAMDATABASE_H

// Header file for the teamDatabase class
// Author: Jamie Beamguard
// Last Revision: 6/21/2021

#include "team.h"
#include <map>

using namespace std;

class TeamDatabase {
private:
	map<int,Team> database;			// map used as the database structure
public:
	TeamDatabase() = default;			// Default constructor
	~TeamDatabase() = default;			// Default destructor
	void insertTeam(Team newTeam);
	void removeTeam();
	void updateTeam();
	int dbSize();
	string viewTeamName(int key);
	int viewTeamSeed(int key);
};

#endif // TEAMDATABASE_H
