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

int main () {
    int passwd, input;
    int i = 0;
    passwd = 39831;

    while (i < 5)
    {
        cout << "Enter your password : " ;
        cin >> input;

        if (input == passwd)
        {
            cout << "Correct!" << endl;
            break;
        } else
        {
            cout << "No! chance reamains : " << 4 - i << endl;
        }
        i++;
    }
}
