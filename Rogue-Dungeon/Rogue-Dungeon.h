#pragma once

#include "Elements.h"

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <vector>

using namespace std;

// Prototypes
COORD GetCoord(void);
void SetCoord(COORD coords);
void ShowConsoleCursor(bool showFlag);
void DrawRoom(Player & player);

// Global Variables
HANDLE hStdOut;
