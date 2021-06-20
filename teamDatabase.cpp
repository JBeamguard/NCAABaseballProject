// This file contains the implementation of the team database for the program
// Author: Jamie Beamguard
// Last Revision: 6/20/2021

#include "teamDatabase.h"
#include "team.h"
#include <map>
#include <string>

using namespace std;
using namespace team;
using namespace database;

class teamDatabase {
private:
	map<string,Team> database;		// map used as the database structure
public:
	void insertTeam();
	void updateTeam();
	void removeTeam();
};
