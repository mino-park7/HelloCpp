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

int main()
{
    int num_col, num_row;
    int **p_p_gugu;

    cout << "col : " ;
    cin >> num_col;
    cout << "row : " ;
    cin >> num_row;
    p_p_gugu = new int*[num_col];

    REP(i, num_col)
    {
        p_p_gugu[ i ] = new int[num_row];
    }
    REP(i, num_col)
    {
        REP(j, num_row)
        {
            p_p_gugu[i][j] = i * j;
        }
    }

    REP(i, num_col)
    {
        REP(j, num_row)
        {
            cout << p_p_gugu[i][j] << "\t" ;
        }
        cout << endl;
    }
    REP(i, num_col)
    {
        delete [] p_p_gugu[i];
    }
    delete p_p_gugu;
    return 0;
}

