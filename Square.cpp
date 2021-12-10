#include <iostream>
using namespace std;

int main(){
        for (int line1 = 0; line1 < 5; line1++){ // Line 1
                cout << "*";
        }
        cout << endl;
        for (int line2 = 0; line2 < 1; line2++){ // Line 2
                cout << "*";
                for (int line2 = 1; line2 < 4; line2++){
                        cout << " ";
                }
                cout << "*" << endl;
        }
        for (int line3 = 0; line3 < 1; line3++){ // Line 3
                cout << "*";
                for (int line3 = 1; line3 < 4; line3++){
                        cout << " ";
                }
                cout << "*" << endl;
        }
        for (int line4 = 0; line4 < 1; line4++){ // Line 4
                cout << "*";
                for (int line4 = 1; line4 < 4; line4++){
                        cout << " ";
                }
                cout << "*" << endl;
        }
        for (int line5 = 0; line5 < 5; line5++){ // Line 5
                cout << "*";
        }
        cout << endl;
}

//12345
//***** Line 1
//*   * Line 2
//*   * Line 3
//*   * Line 4
//***** Line 5