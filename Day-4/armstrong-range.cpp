#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int start , end ;

    cout<<"enter starting number : ";
    cin>>start;

    cout<<"enter ending number : ";
    cin>>end;

    cout<<"Armstrong numbers between "<<start<< " and " <<end <<" are:\n";

    for(int num = start ; num<=end; num++) {

        int temp = num;
        int digits = 0;
        int sum = 0;

        //count digits
        while(temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        
        //calculate sum of digits
        while(temp != 0) {
            int digit = temp % 10;
            sum += round(pow(digit , digits));
            temp /= 10;
        }

        if(sum == num) {

            cout<<num<< " ";
        }
    }



    return 0;
}