#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int num , originalNum , remainder , digits = 0 , sum = 0;

    cout<<"enter a number : ";
    cin>>num;

    originalNum = num;

    //count digits
    int temp = num;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    //calculate sum of powers of digits
    temp = num;
    while(temp != 0) {

        remainder = temp % 10;
        sum += round(pow(remainder,digits));
        temp /= 10;
    }

    if(sum == originalNum) {

        cout<< originalNum <<" is an Armstrong number";
    }

    else {

        cout<< originalNum <<" is not an Armstrong number";
    }

    return 0;
}