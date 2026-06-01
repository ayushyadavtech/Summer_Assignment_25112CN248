#include<iostream>
using namespace std;

int main() {

    int num , sum=0;

    cout<<"enter a number : ";
    cin>>num;

    for(int i=1; i<num; i++) {

        if(num % i == 0) {
            sum += i;
        }
    }

    if(sum == num) {

        cout<<num <<" is a Perfect number";
    }

    else {

        cout<<num <<" is a not Perfect number";
    }



    return 0;
}