Tic Tac Toe Game
<br>
A classic console-based Tic Tac Toe game implemented in C++ for two players. The game is straightforward, allowing players to mark a position on a 3x3 grid by entering row and column numbers. A win is achieved by marking three consecutive cells in a row, column, or diagonal.
<br>
<br>
Features
<br>
Multiplayer: This game is designed for two players, who take turns marking cells.
<br>
Console-Based: A simple interface that runs in the console.
<br>
Input Validation: Ensures players only choose empty cells within valid row and column ranges.
<br>
Game Statistics: Tracks game rounds and outputs results to a stats.txt file, recording wins and draws.
<br>
<br>
Game Rules
<br>
Players take turns entering row and column numbers (0-2) to mark their positions.
<br>
The objective is to align three identical marks (either 'X' or 'O') in a row, column, or diagonal.
<br>
If all nine cells are filled without a winning alignment, the game is a draw.
<br>
<br>
Game Controls
<br>
Input Format: Players enter two numbers (row and column) to choose a cell.
<br>
The board layout:
<br>
Top row: (0,0), (0,1), (0,2)
<br>
Middle row: (1,0), (1,1), (1,2)
<br>
Bottom row: (2,0), (2,1), (2,2)
<br>
<br>
Installation and Running the Game
<br>
Prerequisites
<br>
A C++ compiler (e.g., GCC, Visual Studio)
<br>
Steps
<br>
1.Compile the game using the command: g++ -o TicTacToe TicTacToe.cpp
<br>
2. Run the game: ./TicTacToe
<br>
<br>
Game Options
<br>
Play: Starts a new game round.
<br>
Game Rules: Displays detailed rules for gameplay.
<br>
Game Stats: Displays the outcome history recorded in stats.txt.
<br>
Exit: Closes the game.
<br>
<br>
Game Flow
<br>
Players take turns to enter the row and column number.
<br>
The game checks for valid input and empty cells before placing the player’s icon.
<br>
Once a win or draw condition is met, the board is reset for a new round.
<br>
<br>
File Structure
<br>
TicTacToe.cpp: Contains the game code.
<br>
stats.txt: Stores game statistics, including round number, player, and result.
<br>
<br>
Future Improvements
<br>
Adding a single-player mode with AI.
<br>
Adding a more interactive or GUI-based interface.
