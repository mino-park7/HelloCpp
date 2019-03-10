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


int findSmallestRemainingElement( int array[], int size, int index);
void swap(int array[], int first_index, int second_index);

void sort(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int index = findSmallestRemainingElement(array, size, i);
        swap(array, i, index);
    }
}

int findSmallestRemainingElement(int array[], int size, int index)
{
    int index_of_smallest_value = index;
    for (int i = index + 1; i < size; i++)
    {
        if (array[i] < array[index_of_smallest_value])
        {
            index_of_smallest_value = i;
        }
    }
    return index_of_smallest_value;
}

void swap(int array[], int first_index, int second_index)
{
    int temp = array[first_index];
    array[first_index] = array[second_index];
    array[second_index] = temp;
}

void displayArray(int array[], int size)
{
    cout << "{";
    for(int i = 0; i < size; i++ )
    {
        if ( i != 0)
        {
            cout << ", ";
        }
        cout << array[i];
    }
    cout << "}";
}

void insertion_sort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int index = findSmallestRemainingElement(array, size, i);
        swap(array, i, index);
    }
}

bool isSorted(int array[], int size)
{
    REP(i, size - 1)
    {
        if(array[i] > array[i+1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int array[100];
    srand(  time(NULL) );
    int size = sizeof(array) / sizeof(array[0]);

    REP(i, size)
    {
        array[i] = rand() % 1000;
    }
    displayArray(array, size);
    if (!isSorted(array, size))
    {
        insertion_sort(array, size);
    }
    displayArray(array, size);
}

