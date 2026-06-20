#include <iostream>
#include <string>
using namespace std;

int main() {

    string str1, str2;

    cout << "enter first string: ";
    cin >> str1;

    cout << "enter second string : ";
    cin >> str2 ;

    if (str1.length() != str2.length()) {

        cout << "not a rotation";
        return 0;
    }

    string temp = str1 + str1;

    if (temp.find(str2) != string::npos)
        cout << "String is a rotation";

    else
        cout << "String is not a rotation";

        
    return 0;
}