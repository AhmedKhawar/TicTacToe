#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void display_board(char board[3][3])
{
	cout << "-------------" << endl;;
	for (int i = 0; i < 3; i++)
	{
		cout << "| ";
		for (int j = 0; j < 3; j++)
		{
			cout << board[i][j] << " | ";

		}
		cout << endl;
		cout << "-------------" << endl;
	}
}

bool check_winner(char board[3][3], char player)
{
	for (int i = 0; i < 3; i++)
	{
		if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
		{
			return true;
		}
		if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
		{
			return true;
		}
	}
	if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
	{
		return true;
	}
	if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
	{
		return true;
	}
	return false;
}

void player_turn(char& player)
{
	if (player == 'X')
	{
		player = 'O';
	}
	else
	{
		player = 'X';
	}
}



int main()
{
	char board[3][3] = { { ' ', ' ', ' ' },

	{ ' ', ' ', ' ' },

	{ ' ', ' ', ' ' } };
	char player = 'X';
	int* choice = new int;
	int row, col = 0;
	int no_of_turns;
	int round = 1;
	ofstream fout("stats.txt");
	{
		fout << "";
	}
	fout.close();
	do
	{
		cout << "*************************************" << endl;
		cout << "*      WELCOME TO TIC TAC TOE       *" << endl;
		cout << "*************************************" << endl;
		cout << "Press 1 - to Play" << endl;
		cout << "Press 2 - for Game Rules" << endl;
		cout << "Press 3 - for Game stats" << endl;
		cout << "Press 4 - to Exit" << endl;
		cin >> *choice;
		if (*choice < 1 || *choice > 4)
		{
			cout << "Invalid choice, enter a valid option." << endl;
		}
		else
		{
			switch (*choice)
			{
			case 1:
				display_board(board);
				for (no_of_turns = 0; no_of_turns < 9; no_of_turns++)
				{
					int* check = new int;
					*check = 0;
					while (*check == 0)
					{
						cout << "Player " << player << " enter row (0-2) and column (0-2)" << endl;
						cin >> row >> col;

						if (board[row][col] != ' ' || row < 0 || row > 2 || col < 0 || col > 2)
						{
							cout << "Invalid input, enter again" << endl;
						}
						else
						{
							*check = 1;
						}
					}

					board[row][col] = player;

					ofstream fout("stats.txt");
					{
						if (check_winner(board, player))
						{
							display_board(board);
							cout << "Player " << player << " won" << endl;
							fout << "Round " << round << " has been won by Player " << player << endl;
							break;
						}
						display_board(board);
						if (no_of_turns == 8 && !check_winner(board, 'X') && !check_winner(board, 'O'))
						{
							cout << "It's a draw " << endl;
							fout << "Round " << round << " ended in a draw" << endl;
						}
					}
					fout.close();
					player_turn(player);
				}
				round++;
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						board[i][j] = ' ';
					}
				}
				break;
			case 2:
				cout << "***************************************************************************************" << endl;
				cout << "*                                    GAME RULES                                       *" << endl;
				cout << "***************************************************************************************" << endl;
				cout << "1. In order to win, you must have 3 similar icons in the same row or column.           " << endl;
				cout << "2. If you have same shapes diagonally, you'll also win.                                " << endl;
				cout << "3. For input enter the row and column number you want to mark with a space.            " << endl;
				cout << "4. First digit is Row, 2nd digit represents columns.                                   " << endl;
				cout << "5. Top left block is 0-0, right to it is 0-1 and the block at the right most is 0-2.   " << endl;
				cout << "6. Centre left block is 1-0, right to it is 1-1 and the block at the right most is 1-2." << endl;
				cout << "7. Bottom left block is 2-0, right to it is 2-1 and the block at the right most is 2-2." << endl;
				cout << endl;
				break;
			case 3:
				ifstream Read_Statistics("stats.txt");
				{
					string stats;
					if (getline(Read_Statistics, stats))
					{
						cout << stats << endl;
					}
					else
					{
						cout << "You haven't played a round yet" << endl;
					}
				}
				Read_Statistics.close();
				cout << endl;
				break;
			}
		}
	} while (*choice != 4);
	return 0;
}