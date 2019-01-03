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
    char menu;


    while (true)
    {
        cout << "Choose the menu(1,2,3,4) : ";

        cin >> menu;
        if (menu == '1' || menu == '2' || menu == '3' || menu == '4')
        {
            break;
        }
        cout << "Choose again" << endl;
    }
}
