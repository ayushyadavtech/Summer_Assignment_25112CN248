#include<iostream>
using namespace std;

int max(int a , int b) {

    if(a > b)
    return a;

    else
    return b;
}

int main() {

    int num1 , num2 ;

    cout<<"enter first number : ";
    cin>>num1;

    cout<<"enter second number : ";
    cin>>num2;

    cout<<"Maximum number = " <<max(num1 , num2);

    return 0;
}