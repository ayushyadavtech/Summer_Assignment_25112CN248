#include<iostream>
#include<string>
using namespace std;

int main() {

    string str;

    cout << "enter a string : ";
    getline(cin , str);

    bool found = false;

    for(int i = 0; i < str.length() ; i++) {
        for(int j = i + 1; j < str.length() ; j++) {
            if(str[i] == str[j]) {
                cout << "first repeating character : " << str[i];
                found = true;
                break;
            }
        }

        if(found)
        break;

    }

    if(!found) {
        cout << "no repeating character found";
    }


    return 0;
}