#include<iostream>
using namespace std;

int main() {

    int num , originalNum , digit , sum = 0;

    cout<<"enter a number : ";
    cin>>num;

    originalNum = num;

    while(num != 0) {

        digit = num % 10;

        int fact = 1;
        for(int i=1; i<= digit; i++) {

            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if(sum == originalNum) {

        cout<<originalNum<< " is a strong number";
    }

    else {

        cout<<originalNum << " is a not storng number";
    }
    



    return 0;
}