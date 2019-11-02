#include "Elements.h"

Cell::Cell(int _x, int _y) : X(_x), Y(_y), Explored(false)
{

}

void Cell::MovePlayerHere(Player& player)
{
	player.CurrentCell = this;
	ExploreHere(player);
}

void Cell::ExploreHere(Player& player)
{
	for (int y = Y - EXPLORE_RADIUS; y <= Y + EXPLORE_RADIUS; y++)
	{
		for (int x = X - EXPLORE_RADIUS; x <= X + EXPLORE_RADIUS; x++)
		{
			int distance = abs(Y - y) + abs(X - x);
			if ((distance <= EXPLORE_RADIUS) &&
				(y >= 0 && y <= SQUARE_DIMENSIONS - 1 && x >= 0 && x <= SQUARE_DIMENSIONS - 1))
			{
				player.CurrentRoom->Cells[y][x].Explored = true;
			}
		}
	}
}