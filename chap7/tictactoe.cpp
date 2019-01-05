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
enum TicTacToe_Square {TTTS_BLANK, TTTS_O = 'O', TTTS_X = 'X'};
char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'} ;
int flag = 0 ;
void printGame (char values[])
{
    cout << "-------------" << endl;
    cout << values[0] << "  |  " << values[1] << "  |  " << values[2] << endl;
    cout << "-------------" << endl;
    cout << values[3] << "  |  " << values[4] << "  |  " << values[5] << endl;
    cout << "-------------" << endl;
    cout << values[6] << "  |  " << values[7] << "  |  " << values[8] << endl;
    cout << "-------------" << endl;
}
int choiceCorrect(char board[])
{
    return 1;
}
int playerChoice(int flag)
{
    int choice_loc = 0;
    int isCorrect = 0;
    while (isCorrect == 0 )
    {
        if (flag == 0)
        {
            cout << "player 1 choice (O) : ";
            cin >> choice_loc;
            isCorrect = choiceCorrect(board);
        } else if (flag == 1)
        {
            cout << "player 2 choice (X) : ";
            cin >> choice_loc;
            isCorrect = choiceCorrect(board);
        }
    }
    if (flag == 0)
    {
        board[choice_loc-1] = TTTS_O;
    } else if (flag == 1)
    {
        board[choice_loc-1] = TTTS_X;
    }
    flag = abs(flag - 1);
    return flag;
}
int check(int loc)
{
    if (loc < 3 && board[loc] == board[loc+3] && board[loc] == board[loc+6])
    {
        return 1;
    } else if (loc % 3 == 0 && board[loc] == board[loc+1] && board[loc] == board[loc+2])
    {
        return 1;
    } else if (board[0] == board[4] && board[0] == board[8])
    {
        return 1;
    } else if (board[2] == board[4] && board[2] == board[6])
    {
        return 1;
    } else
    {
        return 0;
    }
}

int winCheck()
{
    for (int i = 0 ; i < 7 ; i++ )
    {
        if (check(i) == 1)
        {
            if (board[i] == TTTS_O)
            {
                cout << "Player 1 win! " << endl;
                return 1;
            } else if (board[i] == TTTS_X)
            {
                cout << "Player 2 win! " << endl;
                return 1;
            }
        }
    }
    return 0;
}
int main ()
{
    while (winCheck() == 0)
    {
        printGame(board);
        flag = playerChoice(flag);
    }
    printGame(board);
}

