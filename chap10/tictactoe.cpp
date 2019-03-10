#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <functional>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include <sstream>
using namespace std;

#define REP(i, n) for(int i = 0; i < (int)(n); ++ i)
#define FOR(i, b, e) for(auto i = b; i < e; ++ i)
#define all(x) (x).begin(), (x).end()
enum TicTacToe_Square {TTTS_BLANK, TTTS_O = 101, TTTS_X = 102};
int board[10][10];
int flag = 0 ;

void initial_board(int col, int row)
{
    REP(i, col)
    {
        REP(j, row)
        {
            board[i][j] = col * i + j + 1;
        }
    }
}
void printGame (int col, int row)
{
    REP(i, col)
    {
        REP(j, row)
        {
            if (board[i][j] == TTTS_O)
            {
                cout << "\t" << "O";
            } else if(board[i][j] == TTTS_X)
            {
                cout << "\t" << "X";
            } else{
                cout << "\t" << board[i][j];}
        }
        cout << "\n" ;
    }
}
int choiceCorrect(int choice_loc,int col,int row)
{
    int col_loc = choice_loc / col;
    int row_loc = choice_loc % col;

    if(board[col_loc][row_loc] == TTTS_O || board[col_loc][row_loc] == TTTS_X)
    {
        return 0;
    }
    return 1;
}
int playerChoice(int flag, int col, int row)
{
    int choice_loc = 0;
    int isCorrect = 0;
    while (isCorrect == 0 )
    {
        if (flag == 0)
        {
            cout << "player 1 choice (O) : ";
            cin >> choice_loc;
            isCorrect = choiceCorrect(choice_loc -1, col, row);
        } else if (flag == 1)
        {
            cout << "player 2 choice (X) : ";
            cin >> choice_loc;
            isCorrect = choiceCorrect(choice_loc - 1, col, row);
        }
    }
    choice_loc = choice_loc - 1;
    int col_loc = choice_loc / col;
    int row_loc = choice_loc % col;
    if (flag == 0)
    {
        board[col_loc][row_loc] = TTTS_O;
    } else if (flag == 1)
    {
        board[col_loc][row_loc] = TTTS_X;
    }
    flag = abs(flag - 1);
    return flag;
}
int check(int i, int j, int col, int row)
{
    if(i < col -3 && j < row -3)
    {
            if(board[i][j] == board[i][j+1] && board[i][j] == board[i][j+2] && board[i][j] == board[i][j+3])
            {
                return 1;
            }
            if(board[i][j] == board[i+1][j] && board[i][j] == board[i+2][j] && board[i][j] == board[i+3][j])
            {
                return 1;
            }
            if(board[i][j] == board[i+1][j+1] && board[i][j] == board[i+2][j+2] && board[i][j] == board[i+3][j+3])
            {
                return 1;
            }
    } else
    {
        if(board[i][j] == board[i+1][j-1] && board[i][j] == board[i+2][j-2] &&board[i][j] == board[i+3][j-3])
            {
                return 1;
            }
    }
    return 0;
}

int winCheck(int col, int row)
{
    REP(i, col-3)
    {
        REP(j, row)
        {
            if (check(i, j, col, row))
            {
                if (board[i][j] == TTTS_O)
                {
                    cout << "Player 1 win! " << endl;
                    return 1;
                } else if (board[i][j] == TTTS_X)
                {
                    cout << "Player 2 win! " << endl;
                    return 1;
                }
            }
        }
    }
    return 0;
}

int drawCheck(int col, int row)
{
    int check = 0;
    REP(i, col)
    {
        REP(j, row)
        {
            check = check + choiceCorrect(i*col + j - 1, col, row);
        }
    }
    if(check == 0)
    {
        return 1;
    }
    return 0;
}

int main ()
{
    int col=0, row;
    while (col < 4)
    {
        cout << "Choose the game board size (must be larger than 3!) : " ;
        cin >> col;
        row = col;
    }
    initial_board(col, row);
    while (winCheck(col, row) == 0 && drawCheck(col, row) == 0)
    {
        printGame(col, row);
        flag = playerChoice(flag, col, row);
    }
    printGame(col, row);
}

