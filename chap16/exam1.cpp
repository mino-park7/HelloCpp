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

int pow(int x, int y)
{
    int result = x;
    if (y != 1)
    {
        result = result * pow(x, y - 1);
    } else if( y == 1)
    {
        result = result;
    }
    return result;
}

int main()
{
    cout << pow(2, 10) << endl;
}

