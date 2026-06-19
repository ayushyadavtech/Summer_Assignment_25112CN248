#include<iostream>
#include<string>
using namespace std;

int main() {

    string str;

    cout << "enter a string : ";
    getline(cin , str);

    bool found = false;

    for(int i = 0; i < str.length() ; i++) {

        int count = 0 ;

        for(int j = 0; j < str.length() ; j++) {
            if(str[i] == str[j]) {
                count++;
            }
        }

        if(count == 1) {
            cout << "first non repeating character : " << str[i];
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "no non repeating character found";
    }


    return 0;
}