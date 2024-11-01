Tic Tac Toe Game
A classic console-based Tic Tac Toe game implemented in C++ for two players. The game is straightforward, allowing players to mark a position on a 3x3 grid by entering row and column numbers. A win is achieved by marking three consecutive cells in a row, column, or diagonal.

Features
Multiplayer: This game is designed for two players, who take turns marking cells.
Console-Based: A simple interface that runs in the console.
Input Validation: Ensures players only choose empty cells within valid row and column ranges.
Game Statistics: Tracks game rounds and outputs results to a stats.txt file, recording wins and draws.
Game Rules
Players take turns entering row and column numbers (0-2) to mark their positions.
The objective is to align three identical marks (either 'X' or 'O') in a row, column, or diagonal.
If all nine cells are filled without a winning alignment, the game is a draw.
Game Controls
Input Format: Players enter two numbers (row and column) to choose a cell.
The board layout:
Top row: (0,0), (0,1), (0,2)
Middle row: (1,0), (1,1), (1,2)
Bottom row: (2,0), (2,1), (2,2)
Installation and Running the Game
Prerequisites
A C++ compiler (e.g., GCC, Visual Studio)
Steps
1.Compile the game using the command: g++ -o TicTacToe TicTacToe.cpp
2. Run the game: ./TicTacToe
Game Options
Play: Starts a new game round.
Game Rules: Displays detailed rules for gameplay.
Game Stats: Displays the outcome history recorded in stats.txt.
Exit: Closes the game.
Game Flow
Players take turns to enter the row and column number.
The game checks for valid input and empty cells before placing the player’s icon.
Once a win or draw condition is met, the board is reset for a new round.
File Structure
TicTacToe.cpp: Contains the game code.
stats.txt: Stores game statistics, including round number, player, and result.
Future Improvements
Adding a single-player mode with AI.
Adding a more interactive or GUI-based interface.
