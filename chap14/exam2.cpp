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
    int len, wid, height;
    int ***p_p_p_gugu;

    cout << "len : " ;
    cin >> len;
    cout << "width : ";
    cin >> wid;
    cout << "height : ";
    cin >> height;

    p_p_p_gugu = new int**[len];
    REP(i, wid)
    {
        p_p_p_gugu[i] = new int*[wid];
        REP(j, height)
        {
            p_p_p_gugu[i][j] = new int[height];
        }
    }

    REP(i, len)
    {
        REP(j, wid)
        {
            REP(k, height)
            {
                p_p_p_gugu[i][j][k] = i * j * k;
                cout << p_p_p_gugu[i][j][k] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    REP(i, len)
    {
        REP(j, wid)
        {
            delete [] p_p_p_gugu[i][j];
        }
        delete [] p_p_p_gugu[i];
    }
    delete [] p_p_p_gugu;
    return 0;
}
