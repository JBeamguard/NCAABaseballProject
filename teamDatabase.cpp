// This file contains the implementation of the team database for the program
// Author: Jamie Beamguard
// Last Revision: 6/21/2021

#include "teamDatabase.h"
#include "team.h"
#include <map>
#include <string>
#include <iostream>
#include <utility>

using namespace std;
using namespace team;
using namespace database;

class TeamDatabase {
private:
	map<int,Team> database;			// map used as the database structure
public:
	// default constructor
	TeamDatabase() = default;
	// insertTeam adds a new team to the database
	void insertTeam(Team inputTeam) {
		int idNum = inputTeam.printID();
		pair<int,Team> dbItem(idNum,inputTeam);

		auto dbInsSucc = database.insert(dbItem);	// add the new team

		if(dbInsSucc.second == false) {
			cout << "Team is already added." << endl;
		}
	};

	void updateTeam();

	void removeTeam();
};
