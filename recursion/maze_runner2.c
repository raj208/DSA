#include <stdio.h>
#include <stdbool.h>

// Define the size of the maze
#define ROWS 5
#define COLS 5

// Define the maze as a 2D array
int maze[ROWS][COLS] = {
    {0, 1, 0, 1, 0},
    {0, 1, 0, 1, 0},
    {0, 0, 0, 1, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 0, 0}
};

// Define directions: right, down, left, up
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};


// to check if you're inside matrix
bool isSafe(int x, int y) {
    return (x >= 0 && x < ROWS && y >= 0 && y < COLS && maze[x][y] == 0);
}

bool solveMaze(int x, int y) {
    if (x == ROWS - 1 && y == COLS - 1) {
        // Reached the exit
        return true;
    }

    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (isSafe(newX, newY)) {
            maze[newX][newY] = 2; // Mark the path
            if (solveMaze(newX, newY)) {
                return true;
            }
            maze[newX][newY] = 0; // Unmark the path if it doesn't lead to the exit
                                // backtracking is used, after function is called
        }
    }

    return false;
}

void printMaze() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", maze[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printf("Maze before solving:\n");
    printMaze();

    if (solveMaze(0, 0)) {
        printf("\nMaze solved:\n");
        printMaze();
    } else {
        printf("\nNo solution found.\n");
    }

    return 0;
}
