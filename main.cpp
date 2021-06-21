// File contains the main function for the overall program
//	main function is based off a state machine topology using an infinite loop
//	until user requests to exit the program.
// Author: Jamie Beamguard
// Last Revision: 6/21/2021

#include <iostream>
#include "menuHelpers.h"
#include "teamDatabase.h"

using namespace std;
using namespace mainMenu;
using namespace database;

int main() {
	int selection = -1;
	TeamDatabase teamMap;

	while(1) {
		char userInput;

		menuPrintHelper();		// print the menu

		// get the user's input and react accordingly
		cin >> userInput;
		selection = menuSelectorHelper(userInput);

		if(!selection) return 0;	// Exit program is chosen
	}

	return 0;
}
