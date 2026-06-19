#include<iostream>
#include<string>
using namespace std;

int main() {

    string str;

    cout << "enter a string : ";
    cin >> str;

    bool palindrome = true;

    for(int i = 0; i < str.length() / 2 ; i++) {

        if(str[i] != str[str.length() - 1 - i]) {
            palindrome = false;
            break;
        }
    }

    if(palindrome) {
        cout << "Palindrome string";
    }

    else {
        cout << "not a palindrome string";
    }


    return 0;
}