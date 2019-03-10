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

struct NumberBook
{
    string name;
    string address;
    string number;
};

NumberBook addPerson(string name, string address, string number)
{
    NumberBook person;
    person.name = name;
    person.address = address;
    person.number = number;

    return person;
}

void showNumberBook(NumberBook person[], int len)
{
    REP(i, len)
    {
        cout << i << " name : " << person[i].name << endl;
        cout << i << " address : " << person[i].address << endl;
        cout << i << " number : " << person[i].number << endl;
    }
}


int main()
{
    string name, address, number;
    NumberBook persons[20];

    REP(i, 20)
    {
        cout << "Name : ";
        cin >> name;
        cout << "Address : ";
        cin >> address;
        cout << "Number : ";
        cin >> number;

        persons[i] = addPerson(name, address, number);

        showNumberBook(persons, i+1);
    }
    return 0;
}

