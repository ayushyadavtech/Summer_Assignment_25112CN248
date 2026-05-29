#include<iostream>
using namespace std;

int main() {

    int num , digit , sum = 0;

    cout<<"enter a number : ";
    cin>>num;

    while(num != 0) {

        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    
    cout <<"sum of digit = "<<sum;




    return 0;
}