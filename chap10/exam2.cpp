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

int getMax(int array[], int size)
{
    int max = array[0];
    for(int i = 0; i < size; i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

int getMin(int array[], int size)
{
    int min = array[0];
    for(int i = 0; i < size; i++)
    {
        if(min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}
int getSum(int array[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    return sum;
}
float getAvg(int array[], int size)
{
    float avg;
    avg = float(getSum(array, size)) / size;
    return avg;
}

int main()
{
    int array[50];
    int size = sizeof(array) / sizeof(array[0]);

    srand( time(NULL) );
    REP(i, size)
    {
        array[i] = rand() % 100;
    }

    cout << "Max : " << getMax(array, size) << endl;
    cout << "Min : " << getMin(array, size) << endl;
    cout << "Sum : " << getSum(array, size) << endl;
    cout << "Avg : " << getAvg(array, size) << endl;
}

