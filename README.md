# AlgoMaze
Alorithm Maze:
# Maze Solving Algorithm in C++

This project implements a maze-solving algorithm in C++. The algorithm can navigate through a triangular maze using either the right-hand or left-hand rule.

## About the Algorithm

The algorithm uses the concept of keeping either the right hand or the left hand on the wall while navigating through the maze. It simulates the movement through 
the maze by following the rule and detecting barriers and open paths to determine the next steps.

## How to Use

1. **Requirements**: Make sure you have a C++ compiler (such as `g++`) installed on your system.

2. **Clone the Repository**: Clone this repository to your local machine using Git:

    ```sh
    git clone https://github.com/EdD-Nuke/AlgoMaze/maze-solving-cpp.git
    ```

3. **Navigate to the Directory**: Go to the project directory:

    ```sh
    cd maze-solving-cpp
    ```

4. **Compile and Run**:

    - Compile the program using your C++ compiler (replace `g++` with the appropriate compiler command if needed):

      ```sh
      g++ -o maze_solver main.cpp
      ```

    - Run the compiled executable:

      ```sh
      ./maze_solver
      ```

5. **Adjust Configuration**: Open the `main.cpp` file and modify the `startRow`, `startCol`, `crossedEdge`, and `turnDirection` variables based on your maze's design.

## Maze Representation

The maze is represented in a text file (`maze.txt`). The first line of the file specifies the maze dimensions (number of rows and columns). Subsequent lines describe each row of the maze, with 0 indicating an open path and 1 indicating a barrier.

Example `maze.txt`:
4 4
0 1 0 0
1 0 1 0
0 0 1 1
0 1 1 0



## Output

The program will output the steps taken by the algorithm as it navigates through the maze. Barriers are represented as `#`, open paths as `.`, and the current position as `X`.

## Verification

- Review your maze-solving logic in the `go` function in `main.cpp`.
- Verify that the starting point and rules are correctly specified.
- Compare the printed path with the actual maze layout and rules.

## Notes

- This project is a simple implementation for educational purposes. Complex mazes may require more advanced algorithms.
- Ensure you have a solid understanding of the C++ programming language to customize and enhance the project as needed.

Feel free to contribute improvements or report any issues!
