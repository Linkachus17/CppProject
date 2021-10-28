#include <iostream>
using namespace std;

int main(){
    int a, b;
    char actions;
    int result;
    while (true){                       // This is the 1st phase
        cout << "Value 1 : ";
        cin >> a;
        cin >> actions;
        cout << "Value 2 : ";
        cin >> b;
        if (actions == '/'){
            result = a / b;
            cout << result << endl;
            return 0;
        }
        else if (actions == '*'){
            result = a * b;
            cout << result << endl;
            return 0;
        }
        else if (actions == '-'){
            result = a - b;
            cout << result << endl;
            return 0;
        }
        else if (actions == '+'){
            result = a + b;
            cout << result << endl;
            return 0;
        }
        else{
            cout << "WRONG ACTION!" << endl;
            return 0;
        }
        while (true){                   //This is the 2nd phase
            cout << "Next value : ";
            cin >> b;
            cin >> actions;
            if (actions == '/'){
                cout << b / result << endl;
                return 0;
            }
            else if (actions == '*'){
                cout << b * result << endl;
                return 0;
            }
            else if (actions == '-'){
                cout << b - result << endl;
                return 0;
            }
            else if (actions == '+'){
                cout << b + result << endl;
                return 0;
            }
            else{
                cout << "WRONG ACTION!" << endl;
                return 0;}
        }
    }
}

// Structure
// Enters value 1 >> action >> value 2 >> result >> add into some sort of data >> actions >> value 2 >> result >> loop
// Problem : maybe switch the return value to something else...