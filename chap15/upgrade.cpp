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

struct EnemySpaceShip
{
    int x_coordinate;
    int y_coordinate;
    int weapon_power;
    EnemySpaceShip *p_next_enemy;
};

EnemySpaceShip *p_enemies = NULL;

EnemySpaceShip *getNewEnemy()
{
    EnemySpaceShip *p_ship = new EnemySpaceShip;
    p_ship->x_coordinate = 0;
    p_ship->y_coordinate = 0;
    p_ship->weapon_power = 20;
    p_ship->p_next_enemy = p_enemies;
    p_enemies = p_ship;
    return p_ship;
}

EnemySpaceShip *addNewEnemyToList(EnemySpaceShip *p_list)
{
    EnemySpaceShip *p_ship = new EnemySpaceShip;
    p_ship->x_coordinate = 0;
    p_ship->y_coordinate = 0;
    p_ship->weapon_power = 20;
    p_ship->p_next_enemy = p_list;
    return p_ship;
}

void upgradeWeapons (EnemySpaceShip *p_ship, int number)
{
    p_ship->weapon_power += number;
}

void printShips(EnemySpaceShip *p_ship)
{
    EnemySpaceShip *p_current = p_ship;
    while(p_current != NULL)
    {
        cout << p_current->x_coordinate << "\t" << p_current->y_coordinate << "\t" << p_current->weapon_power << endl;
        p_current = p_current->p_next_enemy;
    }
}

EnemySpaceShip* findElement(EnemySpaceShip *p_ship, int ith)
{
    EnemySpaceShip *p_current = p_ship;
    REP(i, ith-1)
    {
        p_current = p_current->p_next_enemy;
    }
    return p_current;
}

void deleteElement(EnemySpaceShip *p_ship, int ith)
{
    EnemySpaceShip *p_current = p_ship;
    EnemySpaceShip *p_temp1 = NULL;
    REP(i, ith - 2)
    {
        p_current = p_current->p_next_enemy;
    }
    p_temp1 = p_current->p_next_enemy;
    p_current->p_next_enemy = p_temp1->p_next_enemy;
    delete [] p_temp1;
}

void insertElement(EnemySpaceShip *p_ship, int ith)
{
    EnemySpaceShip *p_current = p_ship;
    EnemySpaceShip *p_node = getNewEnemy();

    p_current = findElement(p_current, ith);
    p_node->p_next_enemy = p_current->p_next_enemy;
    p_current->p_next_enemy=p_node;
}

int main()
{
    EnemySpaceShip *p_exam1 = NULL;
    cout << sizeof(p_exam1) << endl;
    REP(i, 10)
    {
        p_exam1 = addNewEnemyToList(p_exam1);
    }
    EnemySpaceShip *p_current = p_exam1;
    int number = 0;
    while ( p_current != NULL)
    {
        upgradeWeapons( p_current, number );
        cout << p_current->weapon_power << endl;
        p_current = p_current->p_next_enemy;
        number += 1;
    }
//    printShips(p_exam1);
//    deleteElement(p_exam1, 5);
    printShips(p_exam1);
    cout << "insert to 5" << endl;
    insertElement(p_exam1, 5);
    printShips(p_exam1);
}

