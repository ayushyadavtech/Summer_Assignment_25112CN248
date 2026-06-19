#include<iostream>
#include<string>
using namespace std;

int main() {

    string sentence;

    cout << "enter a sentence : ";
    getline(cin , sentence);

    int words = 0;

    for(int i = 0; i < sentence.length(); i++) {
        if(i == 0 && sentence[i] != ' ')
        words++;

        else if(sentence[i] != ' ' && sentence[i - 1] == ' ')
        words++;
    }

    cout << "Number of words = " << words;


    return 0;
}