#include<iostream>
#include<string>
using namespace std;

int main() {

    string str;
    char ch;
    int count = 0;

    cout << "enter a string : ";
    getline(cin , str);

    cout << "enter character to find frequency : ";
    cin >> ch;

    for(int i = 0; i< str.length() ; i++) {
        if(str[i] == ch) {

            count++;
        }
    }

    cout << "Frequency of " << ch << " = " << count;


    return 0;
}