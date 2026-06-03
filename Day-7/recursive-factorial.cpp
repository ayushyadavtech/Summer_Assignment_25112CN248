#include<iostream>
using namespace std;

long long factorial(int n) {

    if(n == 0 || n == 1) {
        return 1;
    }

     return n * factorial(n-1);
}

int main() {

    int num;

    cout<<"enter a number : ";
    cin>>num;

    cout<<"Factorial of "<< num <<" = "<<factorial(num);


    return 0;
}