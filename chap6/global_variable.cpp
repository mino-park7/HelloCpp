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

int doStuff () {
    return 2 + 3;
}

int count_of_function_calls = 0;

void fun () {
    count_of_function_calls ++;
}

int main() {
    fun();
    fun();
    fun();

    cout << "Function fun wa called "
          << count_of_function_calls << " times" << endl;
    return 0;
}

