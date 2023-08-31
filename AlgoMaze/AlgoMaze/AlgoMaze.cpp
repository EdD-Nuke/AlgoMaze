// AlgoMaze.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

const string MAZE_FILE = "maze.txt";

// Global variables
int row_num, col_num;
vector<vector<int>> maze;

void printMaze(int currentRow, int currentCol) {
    for (int r = 0; r < row_num; ++r) {
        for (int c = 0; c < col_num; ++c) {
            if (r == currentRow && c == currentCol) {
                cout << "X ";
            }
            else if (maze[r][c]) {
                cout << "# ";
            }
            else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void go(int r, int c, int crossed, int turn) {
    // Your maze-solving logic here
    // Implement your traversal algorithm

    // Print the maze at each step
    printMaze(r, c);

    // Your traversal algorithm here
}

int main() {
    ifstream file(MAZE_FILE);
    if (!file.is_open()) {
        cout << "Failed to open the maze file." << endl;
        return 1;
    }

    // Read the maze dimensions
    file >> row_num >> col_num;

    // Allocate memory for the maze
    maze.resize(row_num, vector<int>(col_num));
    for (int r = 0; r < row_num; ++r) {
        for (int c = 0; c < col_num; ++c) {
            file >> maze[r][c];
        }
    }
    file.close();

    // Specify starting point and turn direction
    int startRow = 1;   // Adjust as needed
    int startCol = 1;   // Adjust as needed
    int crossedEdge = 0; // Adjust as needed
    int turnDirection = 1; // Adjust as needed

    // Call the maze-solving function with appropriate parameters
    go(startRow, startCol, crossedEdge, turnDirection);

    return 0;
}
