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
int printSong ()
{
    for (int i = 99; i > 1 ; i --)
    {
        cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << endl;
        cout << "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall." << endl;
        cout << endl;
    }

    cout << "1 bottles of beer on the wall, 1 bottle of beer." << endl;
    cout << "Take one down and pass it arount, no more bottles fo beer on the wall." << endl;
    cout << endl;
    cout << "No more bottles of beer on the wall, no more bottles of beer." << endl;
    cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << endl;
}
int calculator ()
{
    float arg1, arg2;
    char op;
    float result ;

    cout << "Enter operator (+,-,*,/) : ";
    cin >> op;
    if (op == '+' || op == '-' || op == '/' || op == '*')
    {
    } else
    {
        cout << "invalid operator" << endl;
        return 0;
    }

    cout << "Enter arg1 : ";
    cin >> arg1;
    cout << "Enter arg2 : ";
    cin >> arg2;
    if (op == '+')
    {
        result = arg1 + arg2;
    } else if (op == '-')
    {
        result = arg1 - arg2;
    } else if (op == '*')
    {
        result = arg1 * arg2;
    } else if (op == '/')
    {
        result = arg1 / arg2;
    }
    cout << "Result is " << result << endl;
}
int main ()
{
    char menu;


    while (true)
    {
        cout << "Choose the menu(1,2) : " << endl;
        cout << "1 : 99 Bottles of Beer : " << endl;
        cout << "2 : calculator : " << endl;

        cin >> menu;
        if (menu == '1' )
        {
            printSong ();
            break;
        } else if (menu == '2')
        {
            calculator ();
            break;
        } else
        {
            cout << "Choose again" << endl;
        }
    }
}
