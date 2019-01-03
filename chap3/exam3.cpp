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
    string choice;
    float a, b;
    int iresult;
    float fresult;
    cout << "Please Choice float or int : ";
    cin >> choice;

    if (choice != "int" && choice != "float")
    {
        return 0;
    }
    cout << "1 argument : ";
    cin >> a;
    cout << "2 argument : ";
    cin >> b;
    iresult = a / b;
    fresult = a / b;
    if (choice == "float")
    {
        cout << "Result : " << fresult << endl;
    } else if (choice == "int")
    {
        cout << "Result : " << iresult << endl;
    }
}

