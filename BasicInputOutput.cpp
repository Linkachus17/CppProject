#include <iostream>
#include <string>
using namespace std;

int main(){
    string mystr;
    cout << "This is my output" << endl;
    getline (cin, mystr);
    cout << mystr;
    return 0;
}