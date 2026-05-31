#include<iostream>
using namespace std;

int main() {

    int num , firstNum = 0, secondNum = 1 , next ;

    cout<<"enter number : ";
    cin>>num;

    if(num == 1) {
        cout<<"Nth fibonacci term = "<<num;
    }

    else if(num == 2) {
        cout<<"Nth fibonacci term = "<<num;
    }

    else {

        for(int i=3; i<=num; i++) {

        next = firstNum + secondNum;

        firstNum = secondNum;
        secondNum = next;
    }

    cout<<"Nth fibonacci term = "<<secondNum;
    }


    return 0;
}