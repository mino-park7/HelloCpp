//
//  username_password.cpp
//  HelloCpp
//
//  Created by minhopark on 2017. 12. 13..
//  Copyright © 2017년 minhopark. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username;
    string password;
    cout << "Enter your username: " << endl;
    getline( cin, username, '\n' );
    
    cout << "Enter your password: " << endl;
    getline( cin, password, '\n' );
    if ( username == "roor" && password == "xyzzy")
    {
        cout << "Access allowd" << endl;
    }
    else
    {
        cout << "Bad username or password. Denied access!" << endl;
        return 0;
    }
}
