#include<iostream>
using namespace std;

int main() {

    int num , fact = 1;

    cout<<"enter a number : ";
    cin >>num;

    for(int i=1; i<=num; i++) {

        fact *= i;
    }

    cout<< "factorial of "<<num<<" number = "<<fact;


    return 0;
}