#ifndef MENUHELPERS_H
#define MENUHELPERS_H

// This file contains the declarations of main helper functions
// Author: Jamie Beamguard
// Last Revision: 6/21/21

#include "teamDatabase.h"

void menuPrintHelper();
int menuSelectorHelper(char userInput, TeamDatabase& database);
void addTeamHelper(TeamDatabase& database);
void viewTeamStatsHelper();
void updateGameHelper();
void viewAllTeamsHelper(TeamDatabase& database);

#endif // MENUHELPERS_H
