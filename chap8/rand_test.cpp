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

int randRange(int low, int high){
    return rand() % (high - low + 1) + low;
}

int main() {
    srand(time(NULL));
    int random_num;
    int count_num;
    for(int i = 0; i < 1000000; i ++){
        random_num = randRange(1, 1000);
            if(random_num < 501){
                count_num ++;
            }
    }
    cout << (count_num / 1000000.0);
    return 0;
}

