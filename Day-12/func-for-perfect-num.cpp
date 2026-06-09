#include<iostream>
using namespace std;

bool isPerfect(int num) {

    int sum = 0;

    for(int i = 1; i< num ; i++) {

        if(num % i == 0) {

            sum += i;
        }
    }

    return sum == num;
}

int main() {

    int num ;

    cout<<"enter a number : ";
    cin>>num;

    if(isPerfect(num))
    cout<< num << " is a Perfect number.";

    else
    cout<< num <<" is not a Perfect number.";

    return 0;
}