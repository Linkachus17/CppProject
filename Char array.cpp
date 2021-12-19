#include <iostream>

#include <string.h>

#include <algorithm>

using namespace std;

int main() {
    char text[100];
    printf("Input kalimat : ");
    cin.getline(text, sizeof(text));
    reverse(text, text+strlen(text));
    printf("Kalimat reverse : %s\n", text);
    reverse(text, text+strlen(text)); // reverse back
    printf("Kalimat perubahan : ");
    // replace(text, text+strlen(text), 'u', 'o');  <-- Before using for and if conditional and most recommended for chars
    for (int check = 0; check < strlen(text); check++) {
        if (text[check] == 'u') {
            printf("oe");
        } else if (text[check] == 'j') {
            printf("dj");
        } else if (text[check] == 'y') {
            printf("j");
        } else if (text[check] == 'c') {
            printf("tj");
        } else {
            cout << text[check];
        }
    }
    printf("\n");
}