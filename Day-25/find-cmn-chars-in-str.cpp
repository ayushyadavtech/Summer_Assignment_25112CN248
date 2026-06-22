#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str1, str2;

    cout << "enter first string : ";
    getline(cin, str1);

    cout << "enter second string: ";
    getline(cin, str2);

    cout << "Common characters: ";

    for (int i = 0; i < str1.length(); i++) {
        bool found = false;

        for (int j = 0; j < str2.length(); j++) {

            if (str1[i] == str2[j]) {
                found = true;
                break;
            }
        }

        // To avoid printing duplicates
        bool duplicate = false;

        for (int k = 0; k < i; k++) {
            if (str1[k] == str1[i]) {
                duplicate = true;
                break;
            }
        }

        if (found && !duplicate) {
            cout << str1[i] << " ";
        }
    }

    return 0;
}