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
    float result, input;
    result = 0;
    input = 1;
    while (input != 0)
    {
        cout << "Please enter the number : ";
        cin >> input;
        result = result + input;
        cout << "Result : " << result << endl;
    }
}
