#include <iostream>
#include <string>
using namespace std;

int main(){
    char rain;
    char umbrella;
    cout << "Set Rain (Y/N) ";
    cin >> rain;
    if (rain == 'Y'){
        cout << "Dutch : John it's raining, can you find us some umbrella?" << endl;
        cout << "Set Umbrella (Y/N) ";
        cin >> umbrella;
        if (umbrella == 'Y'){
            cout << "John : Here's some umbrella, enough for us..." << endl;
            cout << "Dutch : Good, now let's get outta here without getting lawmen onto us" << endl;
            return 0;
        }
        if (umbrella == 'N'){
            cout << "John : Nope, no umbrella's here..." << endl;
            cout << "Dutch : Fine...we'll wait here till the rain is gone" << endl;
            return 0;
        }
        else{
            cout << "THAT'S NOT BOOL TYPE!";
            return 0;
        }
    }
    if (rain == 'N'){
        cout << "Dutch : Alright...we lost them...we need to stay low, otherwise we'll die in any sec" << endl;
        return 0;
    }
    else{
        cout << "THAT'S NOT BOOL TYPE!";
        return 0;
    }
}