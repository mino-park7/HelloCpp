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
