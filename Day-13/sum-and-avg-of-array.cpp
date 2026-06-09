#include<iostream>
using namespace std;

int main() {

    int num ;
    
    cout<< "enter size of array : ";
    cin >> num;

    int arr[num];
    int sum = 0;

    cout<<"enter array elements : \n";
    
    for(int i=0; i< num; i++) {

        cin >> arr[i];
        sum += arr[i];
    }

    float average = (float)sum / num;

    cout<< "Sum = " << sum << endl;
    cout<< "Average = " << average;


    return 0;
}