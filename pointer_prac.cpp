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
int main(){


    int i, * pi;
    float f, * pf;

    i = 1024;
    f = 3.14;
    pi = (int *) malloc(sizeof(int));
    pf = (float *) malloc(sizeof(float));

    * pi = 1024;
    * pf = 3.14;

    cout << * pi << endl << * pf << endl;
    cout << pi << endl << pf << endl;
    free(pi);
    free(pf);
    return 0;
}
