// sum of numbers from 1 to n − sum of array elements


#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,4,3};
    int n=5;
    int len=4;
    int sum=0;
    for(int i=0; i<4; i++){
        sum+=arr[i];
    }

    int total=(n*(n+1))/2;
    cout<<"Missing number is: "<<total-sum;

    return 0;
}