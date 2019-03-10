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
#include <ctime>
#include <cstdlib>
using namespace std;

#define REP(i, n) for(int i = 0; i < (int)(n); ++ i)
#define FOR(i, b, e) for(auto i = b; i < e; ++ i)
#define all(x) (x).begin(), (x).end()


int coinToss()
{
    int random_var ;
    random_var = rand() % 2 ;
    if (random_var == 0)
    {
        cout << "Head" << endl;
        return 0;
    } else
    {
        cout << "Tail" << endl;
        return 1;
    }
}

int main ()
{
    srand( time( NULL) );

    int stat[2] = {0, 0};
    int coin;
    float result = 0;
    for (int i = 0 ; i<10000; i++)
    {
        coin = coinToss();
        cout << coin << endl;
        stat[coin] = stat[coin] + 1;
    }
    result = (float(stat[0]) / (stat[0] + stat[1]));
    cout << result << endl;
}
