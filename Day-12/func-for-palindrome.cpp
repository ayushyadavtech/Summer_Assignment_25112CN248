#include<iostream>
using namespace std;

bool isPalindrome(int num) {

    int originalNum = num ;
    int reverse = 0;

    while(num != 0) {

        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

   return originalNum == reverse;

}


int main() {

    int num;

    cout<<"enter a number : ";
    cin>>num;

    if(isPalindrome(num))
    cout<< num << " is a Palindrome number.";

    else
    cout<< num << " is not a Palindrome number.";


    return 0;
}