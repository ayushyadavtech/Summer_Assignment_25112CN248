#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int num) {

    int originalNum = num;
    int digits = 0;
    int sum = 0;

    int temp = num;

    while(temp != 0) {
        digits++;
        temp /= 10 ;
    }

    temp = num;

    while(temp != 0) {
        int digit = temp % 10;
        sum += round(pow(digit, digits));
        temp /= 10;
    }

    return sum == originalNum;
}


int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(isArmstrong(num))
        cout << num << " is an Armstrong number.";

    else
        cout << num << " is not an Armstrong number.";

    return 0;
}