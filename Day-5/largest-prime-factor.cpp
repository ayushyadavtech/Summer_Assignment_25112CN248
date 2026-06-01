#include<iostream>
using namespace std;

int main() {

    int num;

    cout<<"enter a number : ";
    cin>>num;

    int largestPrimeFactor = 0;

    for(int i=2; i<=num; i++) {

        while(num % i == 0) {
            largestPrimeFactor = i;
            num /= i;
        }
    }

    cout<<"Largest Prime Number = "
        <<largestPrimeFactor;

    return 0;
}