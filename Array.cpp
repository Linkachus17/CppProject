#include <iostream>
using namespace std;

int main(){
    int arr1 [3] = {1,0,1};
    int arr2 [3] = {0,1,0};
    int arr3 [3] = {1,0,1};
    for (int i=0; i<3; i++){
        cout << arr1[i] << endl;
    }
    for (int f=0; f<3; f++){
        cout << arr2[f] << endl;
    }
    for (int c=0; c<3; c++){
        cout << arr3[c] << endl;
    }
        return 0;
}
// Problem
// Not sure if I can just display the array in 1 line
// Expected output should be :
// 101
// 010
// 101

// Instead :
//1
//0
//1
//0
//1
//0
//1
//0
//1


// Hey! at least I done my assignment (probably)