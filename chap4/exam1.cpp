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
    int ageA, ageB ;

    cout << "user A's age ? : ";
    cin >> ageA;
    cout << "user B's age? : ";
    cin >> ageB;
    if (ageA > 100 && ageB > 100)
    {
        cout << "wow grandfather!" << endl;
        return 0;
    }
    if (ageA > ageB)
    {
        cout << "user A is elder" << endl;
    } else if (ageB > ageA)
    {
        cout << "user B is elder" << endl;
    } else if (ageA == ageB)
    {
        cout << "same age" << endl;
    }
}
