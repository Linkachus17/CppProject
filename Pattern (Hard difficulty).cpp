#include <iostream>

using namespace std;

int main() {
  char chara1 = 'A', chara2 = 'A', chara3 = 'A', chara4 = 'A';
  int placeholder1, placeholder2, placeholder3, placeholder4;
  int placeholder5 = 1;

  cout << "Masukan angka : ";
  cin >> placeholder1;

  cout << "*";
  for (placeholder2 = 1; placeholder2 < placeholder1; placeholder2++) {
    cout << " " << chara1;
    chara1++;
  }
  cout << endl;
  for (placeholder2 = 1; placeholder2 < placeholder1; placeholder2++) {
    cout << placeholder2;
    chara2++;
    for (placeholder4 = 1; placeholder4 < placeholder1; placeholder4++) {
      cout << " " << chara3 << placeholder2;
      chara3++;
    }
    chara3 = 'A';
    cout << endl;
  }
}