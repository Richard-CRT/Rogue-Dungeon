#pragma once

#define SQUARE_DIMENSIONS 20
#define EXPLORE_RADIUS 4

#include <vector>

class Room;
class Cell;
class Player;

using namespace std;

class Room
{
public:
	Room();

	Room* RightRoom;
	Room* DownRoom;
	Room* LeftRoom;
	Room* UpRoom;

	vector<vector<Cell>> Cells;

	void MovePlayerHere(Player& player);
};

class Cell
{
public:
	Cell(int _x, int _y);

	int X;
	int Y;

	bool Explored;

	void MovePlayerHere(Player& player);
	void ExploreHere(Player& player);
};

class Player
{
public:
	Player();

	Room* CurrentRoom;
	Cell* CurrentCell;
};

