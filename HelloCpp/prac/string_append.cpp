//
//  string_append.cpp
//  HelloCpp
//
//  Created by minhopark on 2017. 12. 13..
//  Copyright © 2017년 minhopark. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    string user_fisrt_name;
    string user_last_name;
    
    cout << "Please enter your first name: ";
    cin >> user_fisrt_name;
    cout << "Please enter your last name: ";
    cin >> user_last_name;
    string user_full_name =
    user_fisrt_name + " " + user_last_name;
    
    cout << "Your name is : " << user_full_name << endl;
}
