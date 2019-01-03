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

int main()
{
    int array[8][8];

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            array[i][j] = i * j;
        }
    }
    cout << "Multiplication table: \n";
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            cout << "[ "<< i << " ][ " << j <<" ] = ";
            cout << array[i][j] <<" " ;
            cout << "\n";
        }
    }
    return 0;
}

