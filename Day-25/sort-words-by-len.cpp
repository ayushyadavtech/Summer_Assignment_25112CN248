#include <iostream>
#include <string>
using namespace std;

int main() {

    int num;

    cout << "enter number of words : ";
    cin >> num;

    string words[num];

    cout << "Enter words:\n";

    for (int i = 0; i < num; i++) {
        cin >> words[i];
    }

    // Sort words by length
    for (int i = 0; i < num - 1; i++) {

        for (int j = i + 1; j < num; j++) {

            if (words[i].length() > words[j].length()) {
                string temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }

    cout << "\nWords sorted by length:\n";
    for (int i = 0; i < num; i++) {
        cout << words[i] << endl;
    }

    return 0;
}