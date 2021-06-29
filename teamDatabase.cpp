// This file contains the implementation of the team database for the program
// Author: Jamie Beamguard
// Last Revision: 6/21/2021

#include "teamDatabase.h"
#include <string>
#include <iostream>
#include <utility>

using namespace std;

// insertTeam adds a new team to the database
void TeamDatabase::insertTeam(Team inputTeam) {
	int idNum = inputTeam.getID();

	pair<int,Team> dbItem(idNum,inputTeam);	// Create a new map object

	auto dbInsSucc = database.insert(dbItem);	// add the new team to the map

	if(dbInsSucc.second == false) {				// If second part of dbInsSucc == 0, team is already in the database
		cout << "Team is already added." << endl;
	}
}

// Return the number of items in the database
int TeamDatabase::dbSize() {
	return database.size();
}

// Return the name of the team at the key ID
string TeamDatabase::viewTeamName(int key) {
	return database.at(key).teamName();
}

//void TeamDatabase::updateTeam();

//void TeamDatabase::removeTeam();
