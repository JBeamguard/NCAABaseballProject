#ifndef TEAMDATABASE_H
#define TEAMDATABASE_H

// Header file for the teamDatabase class
// Author: Jamie Beamguard
// Last Revision: 7/6/2021

#include "team.h"
#include <map>
#include <utility>

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
	Team& at(int key);
	string viewTeamName(int key);
	int viewTeamSeed(int key);
};

#endif // TEAMDATABASE_H
