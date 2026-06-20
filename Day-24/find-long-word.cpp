#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;

    cout << "enter a sentence: ";
    getline(cin, str);

    string word = "", longestWord = "";

    for (int i = 0 ; i <= str.length(); i++) {

        if (i == str.length() || str[i] == ' ') {

            if (word.length() > longestWord.length()) {
                longestWord = word;
            }

            word = "";
        }
        
        else {
            word += str[i];
        }
    }

    cout << "Longest word: " << longestWord << endl;
    cout << "Length: " << longestWord.length();

    return 0;
}