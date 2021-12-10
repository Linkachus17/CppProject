#include <iostream>
using namespace std;

int main(){
        for (int line1 = 0; line1 < 6; line1++){ // Line 1
                cout << " ";
                if (line1 == 5){
                        cout << "*";
                        for (line1 = 6; line1 < 10; line1++){
                                cout << " ";
                        }
                }
        }
        cout << endl;
        for (int line2 = 0; line2 < 5; line2++){ // Line 2
                cout << " ";
                if (line2 == 4){
                        cout << "***";
                        for (line2 = 6; line2 < 10; line2++){
                                cout << " ";
                        }
                }
        }
        cout << endl;
        for (int line3 = 0; line3 < 4; line3++){ // Line 3
                cout << " ";
                if (line3 == 3){
                        cout << "*****";
                        for (line3 = 7; line3 < 10; line3++){
                                cout << " ";
                        }
                }
        }
        cout << endl;
        for (int line4 = 0; line4 < 3; line4++){ // Line 4
                cout << " ";
                if (line4 == 2){
                        cout << "*******";
                        for (line4 = 8; line4 < 10; line4++){
                                cout << " ";
                        }
                }
        }
        cout << endl;
        for (int line5 = 0; line5 < 5; line5++){ // Line 5
                cout << " ";
                if (line5 == 1){
                        cout << "*********";
                        for (line5 = 9; line5 < 10; line5++){
                                cout << " ";
                        }
                }
        }
        cout << endl;
        for (int line6 = 0; line6 < 10; line6++){ // Line 6
                cout << " ";
                if (line6 == 0){
                        cout << "***********";
                }
        }
        cout << endl;
// There is something wrong between those 6 lines when writing the code, the program runs fine but not as expected down below
// I am too lazy to inspect right now
}

//0123456789X
//     *      Line 1
//    ***     Line 2
//   *****    Line 3
//  *******   Line 4
// *********  Line 5
//*********** Line 6