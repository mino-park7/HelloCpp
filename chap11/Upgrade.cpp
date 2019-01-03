struct EnemySpaceShip
{
    int x_coordinate;
    int y_coordinate;
    int weapon_power;
};
// 요거 그냥 함수네.... return type이 EnemySpaceShip인 function
EnemySpaceShip getNewEnemy ()
{
    EnemySpaceShip ship;
    ship.x_coordinate = 0;
    ship.y_coordinate = 0;
    ship.weapon_power = 20;
    return ship;
}

EnemySpaceShip upgradeWeapons (EnemySpaceShip ship)
{
    ship.weapon_power += 10;
    return ship;
}

int main ()
{
    EnemySpaceShip enemy = getNewEnemy();
    enemy = upgradeWeapons( enemy );
}



