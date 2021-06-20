// This file contains the implementation of Main's menu helper functions
// Author: Jamie Beamguard
// Last Revision: 6/20/21

#include "menuHelpers.h"
#include <iostream>

using namespace mainMenu;
using namespace std;

// Will print the context menu in Main
void menuPrintHelper() {
	cout << "What would you like to do?" << endl;
	cout << "A - Add a team" << endl;
	cout << "V - View a team's stats" << endl;
	cout << "U - Update a game" << endl;
	cout << "X - Exit the program" << endl;
}

// Used to help the context menu move to the next state in Main
int menuSelectorHelper(char userInput) {
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
			cout << "Please enter a valid character." << endl;
			return 1;	// go again
	}
}