#include "Elements.h"

Room::Room() : RightRoom(nullptr), DownRoom(nullptr), LeftRoom(nullptr), UpRoom(nullptr)
{
	for (int y = 0; y < SQUARE_DIMENSIONS; y++)
	{
		vector<Cell> cellRow;
		for (int x = 0; x < SQUARE_DIMENSIONS; x++)
		{
			Cell newCell(x, y);
			cellRow.push_back(newCell);
		}
		Cells.push_back(cellRow);
	}
}

void Room::MovePlayerHere(Player &player)
{
	player.CurrentRoom = this;
	Cells[0][0].MovePlayerHere(player);
}
