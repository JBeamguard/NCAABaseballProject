#ifndef MENUHELPERS_H
#define MENUHELPERS_H

// This file contains the declarations of main helper functions
// Author: Jamie Beamguard
// Last Revision: 7/6/21

#include "teamDatabase.h"

void menuPrintHelper();
int menuSelectorHelper(char userInput, TeamDatabase& database);
void addTeamHelper(TeamDatabase& database);
void viewTeamStatsHelper(TeamDatabase& database);
void insertGameHelper(TeamDatabase& database);
void viewAllTeamsHelper(TeamDatabase& database);
int getTeamKey(string team, TeamDatabase& database);

#endif // MENUHELPERS_H
