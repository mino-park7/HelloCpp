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
#include <cstdlib>
#include <ctime>
using namespace std;

#define REP(i, n) for(int i = 0; i < (int)(n); ++ i)
#define FOR(i, b, e) for(auto i = b; i < e; ++ i)
#define all(x) (x).begin(), (x).end()

int range[2] = {1, 100};
int randRange (int low, int high)
{
    int random_var;
    random_var = rand() % (high -low +1) + low;
    return random_var;
}

int printRange (int target, int predict)
{
    if (target < predict)
    {
        cout << predict <<" is too high" << endl;
        return 1;
    } else if (target > predict)
    {
        cout << predict << " is too low" << endl;
        return 2;
    } else
    {
        cout << predict <<" is just right" << endl;
        return 0;
    }
}

int solver (int state, int predict)
{
    int new_predict;
    if (state == 1)
    {
        range[1] = predict - 1;
    } else if(state == 2)
    {
        range[0] = predict + 1;
    } else if(state == 0 )
    {
        return 0;
    }
    new_predict = randRange(range[0], range[1]);
    return new_predict;
}

int main ()
{
    int target, predict ;
    int state = 1;
    srand ( time (NULL) );
    target = randRange(range[0], range[1]);
    predict = randRange(range[0], range[1]);
    while (state != 0)
    {
        state = printRange(target, predict);
        predict = solver(state, predict);
    }
}

