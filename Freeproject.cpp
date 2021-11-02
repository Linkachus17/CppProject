#include <iostream>
#include <string>
using namespace std;

int main(){
    int number;
    cout << "1.Nasi goreng\n2.Nasi Kebuli\n3.Es cream\n4.Es campur\n5.Kerupuk" << endl;
    cin >> number;
    if (number == 1){
        cout << "Kenyang";
        return 0;
    }
    else if (number == 2){
        cout << "Kenyang";
        return 0;
    }
    else if (number == 3){
        cout << "Lumayan kenyang";
        return 0;
    }
    else if (number == 4){
        cout << "Lumayan kenyang";
        return 0;
    }
    else if (number == 5){
        cout << "Lagi";
        return 0;
    }
    else{
        return 0;
    }

}