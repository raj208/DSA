#include<stdlib.h>
#include<stdih.h>
#include<stdbool.h>

#define ROWS 5
#define COLS 5

int maze[ROWS][COLS] = {
	{1,0,1,1,1},
	{1,1,1,0,1},
	{0,0,0,1,1},
	{1,1,1,1,0},
	{1,0,0,0,1}
};

void printMaze()
{
	for(int i=0; i<ROWS; i++)
	{
		printf("#");
	}
	else
	{
		printf(". ");
	}
	printf("\n");
}

bool solveMaze(int x, inty);
{
	if(x== ROWS -1 && y == CPLS -1)
	{
		return true;
	}

	if()

