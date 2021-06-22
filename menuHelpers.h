#ifndef MENUHELPERS_H
#define MENUHELPERS_H

// This file contains the declarations of main helper functions
// Author: Jamie Beamguard
// Last Revision: 6/21/21

#include "teamDatabase.h"

namespace mainMenu
{

	void menuPrintHelper();
	int menuSelectorHelper(char userInput);
	void addTeamHelper(database::TeamDatabase database);
	void viewTeamStatsHelper();
	void updateGameHelper();

}

#endif // MENUHELPERS_H
