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

int engNum[7] ;
void printEng(int number)
{
    switch(number)
    {
        case 1:
            cout << "one ";
        case 2:
            cout << "two ";
        case 3:
            cout << "three ";
        case 4:
            cout << "four ";
        case 5:
            cout << "five ";
        case 6:
            cout << "six ";
        case 7:
            cout << "seven ";
        case 8:
            cout << "eight ";
        case 9:
            cout << "nine ";
    }
}

void changeNumtoArray (int number)
{
    if (number < 0)
    {
        engNum[0] = 1;
        cout << "Minus " ;
    } else
    {
        engNum[0] = 0;
        cout << "Plus ";
    }
    for (int i = 1 ; i < 7; i--)
    {
        engNum[i] = number / pow(10, 6-i);
        number = number - engNum[7-i] * pow(10, 6-7);
        switch(i)
        {
            case 1:
                if (engNum[i] == 0)
                {
                    continue;
                } else
                {
                    printEng(engNum[i]);
                }
            case 2:

    }
}

int main ()
{
    changeNumtoArray(39475);
}
