// This file contains the implementation of Main's menu helper functions
// Author: Jamie Beamguard
// Last Revision: 6/21/2021

#include "menuHelpers.h"
#include <iostream>
#include <string>
#include "teamDatabase.h"
#include "team.h"

using namespace team;
using namespace std;
using namespace database;


// Will print the context menu in Main
void mainMenu::menuPrintHelper() {
	cout << "What would you like to do? (case sensitive)" << endl;
	cout << "A - Add a team" << endl;
	cout << "V - View a team's stats" << endl;
	cout << "U - Update a game" << endl;
	cout << "X - Exit the program" << endl;
}

// Used to help the context menu move to the next state in Main
int mainMenu::menuSelectorHelper(char userInput) {
	switch(userInput) {
		case 'A':	// User wants to add a teams
			// addTeamHelper();
			return 1;	// request success
		case 'V':	// User wants to view a teams stats
			// viewTeamStatsHelper();
			return 1;	// request success
		case 'U':	// User wants to update a game's results
			// updateGameHelper();
			return 1;	// request success
		case 'X':	// Exit the program
			cout << "Good-bye!" << endl;
			return 0;	// return 0 to exit
		default:
			cout << endl << "Error: Please enter a valid character!" << endl << endl;
			return 1;	// go again
	};
}

// Used to add a team to the main database
void mainMenu::addTeamHelper(TeamDatabase teamMap) {
	string name;
	int seed;
	int id;

	// Gather the needed information
	cout << "Enter team name: ";
	cin >> name;
	cout << endl << "Enter seed number: ";
	cin >> seed;
	cout << endl << "Enter an ID number: ";
	cin >> id;
	cout << endl;

	Team newTeam(name, seed, id);		// instance a Team item using info

	teamMap.insertTeam(newTeam);		// insert the new team item

	cout << "Team added successfully." << endl;
}
