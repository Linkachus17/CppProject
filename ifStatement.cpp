#include <iostream>
#include <string>
using namespace std;

int main(){
    int myval;
    cout << "Please enter the value : ";
    cin >> myval;
    if (myval == 10){
        cout << "The value is 10!" << endl;
    }
    if (myval > 10){
        cout << "The value is bigger than 10!" << endl;
    }
    else{
        cout << "The valuse is lower than 10!" << endl;
    }
}