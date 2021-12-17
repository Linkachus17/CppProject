#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
  string kalimat;
  cout << "Masukan kalimat : ";
  cin >> kalimat;
  reverse(kalimat.begin(), kalimat.end());
  cout << "Kalimat kebalik : " << kalimat << endl;
  for (int i = 0; i < kalimat.size(); i++){
    if (kalimat[i] == 'u'){
      kalimat[i] = 'o';
    }
    if (kalimat[i] == 'j'){
      kalimat[i] = 'd';
    }
    if (kalimat[i] == 'y'){
      kalimat[i] = 'j';
    }
    if (kalimat[i] == 'c'){
      kalimat[i] = 't';
    }
  }
  reverse(kalimat.begin(), kalimat.end());
  cout << "Kalimat berubah : " << kalimat << endl;
}


//Task
// u = oe
// j = dj
// y = j
// c = tj

// Input kalimat
// Balik kalimat
// Pengubahan kalimat