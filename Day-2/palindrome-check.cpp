#include<iostream>
using namespace std;

int main() {

    int num , originalNum , reverse = 0 , digit;

    cout<<"enter a number : ";
    cin>>num;

    originalNum = num;

    while(num != 0) {

        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;

    }

    if(originalNum == reverse) {
        cout <<"Palindrome number";
    }

    else {
        cout<<"not a palindrome number";
    }

    return 0;
}