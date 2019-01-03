#include <iostream>

using namespace std;

struct PlayerInfo
{
    int skill_level;
    string name;
};

int main()
{
    // 일반적인 변수 타입처럼 구조체도 배열로 만들 수 있다.
    PlayerInfo players[ 5 ];
    for ( int i = 0; i < 5; i++ )
    {
        cout << "Please enter the name for player : "
            << i << endl;
        // 우선 일반적인 배열 문법으로 배열의 요소에 접근한 다음,
        // '.' 문법으로 구조체의 필드에 접근
        cin >> players[ i ].name;
        cout << "Please enter the skill level for "
            << players[ i ].name << endl;
        cin >> players[ i ].skill_level;
    }
    for ( int i = 0; i < 5; ++i)
    {
        cout << players[ i ].name
            << " is at skill level "
            << players[ i ].skill_level << endl;
    }
}


