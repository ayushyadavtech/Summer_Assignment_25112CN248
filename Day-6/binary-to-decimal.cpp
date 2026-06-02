#include<iostream>
using namespace std;

int main() {

    long binary;
    int decimal = 0 , base = 1;

    cout<<"enter a binary number : ";
    cin>>binary;

    while(binary > 0) {

        int lastDigit = binary % 10;
        decimal = decimal + (lastDigit * base);
        base *= 2;
        binary /= 10;
    }

    cout<<"Decimal number = "<<decimal;



    return 0;
}