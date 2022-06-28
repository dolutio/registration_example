#include <iostream>
#include <string>
using namespace std;

void main(){
    string name, username, password;

    cout << "Enter your name:";
    cin >> name;
    
    cout << "Enter your username:";
    cin >> username;

    cout << "Enter your password:";
    cin >> password;

    if (name == "name" && username == "username" && password == "password"){
        cout << "Ho ho ho very funny!";
        cout << endl;
    }
    else{
        cout << "Hi, " << name << "!";
        cout << endl;

        cout << "Your user name is " << username;
        cout << endl;

        cout << "Your password is " << password;
        cout << endl;
    }
}