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

void inputPointer(string **first_name, string *last_name)
{
    string f_name;
    if(*first_name == NULL)
    {
        cout << "Pointer" << endl;
        cin >> f_name;
        *first_name = &f_name;
        cout << *first_name << "  " << &f_name << "  " << f_name[6] << endl;
        cin >> *last_name;
    }
}

void inputRef(string &first_name, string &last_name)
{
    cout << "REF" << endl;
    cin >> first_name;
    cin >> last_name;
}

int main()
{
    string first_name1, first_name2;
    string *p_first_name1 = NULL;
    string last_name1, last_name2;
    string *p_last_name1 = &last_name1;

    inputPointer(&p_first_name1, &last_name1);
    inputRef(first_name2, last_name2);

    cout << *p_first_name1 << endl;
    cout << last_name1 << endl;
    cout << first_name2 << endl;
    cout << last_name2 << endl;
}
