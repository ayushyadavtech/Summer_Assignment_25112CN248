#include<iostream>
#include<string>
using namespace std;

int main() {

    string str , result = "";

    cout << "enter a string : ";
    getline(cin , str);

    for(int i = 0; i < str.length(); i++) {
        if(str[i] != ' ') {
            result += str[i];
        }
    }

    cout << "string after removing spaces : " << result ;


    return 0;
}