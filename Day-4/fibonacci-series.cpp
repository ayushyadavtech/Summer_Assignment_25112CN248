#include<iostream>
using namespace std;

int main() {

    int num , firstNum = 0 , secondNum = 1 , next;

    cout<<"enter a number : ";
    cin>>num;

    cout<<"Fibonacci series : ";

    for(int i=1; i<=num; i++) {

        cout<<firstNum<<" ";

        next = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = next;
    }


    return 0;
}