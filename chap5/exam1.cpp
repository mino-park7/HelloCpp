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

int main ()
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

