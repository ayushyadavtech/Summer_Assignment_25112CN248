#include<iostream>
#include<string>
using namespace std;

int main() {

    string str1, str2 ;

    cout << "enter first string : ";
    cin >> str1;

    cout << "enter second string : ";
    cin >> str2;

    if(str1.length() != str2.length()) {
        
        cout << "not Anagrams";
        return 0;
    }

    bool isAnagram = true;

    for(int i = 0; i < str1.length(); i++) {

        int count1 = 0, count2 = 0;

        for(int j = 0; j < str1.length(); j++) {

            if(str1[i] == str1[j])
                count1++;

            if(str1[i] == str2[j])
                count2++;
        }

        if(count1 != count2) {
            isAnagram = false;
            break;
        }
    }

    if(isAnagram)
        cout << "Anagrams";

    else
        cout << "not Anagrams";


    return 0;
}