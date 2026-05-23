#include<iostream>
#include<cmath>
using namespace std;
int main(){

// Input: n = 153

// Output: true

// Explanation: Number of digits : 3.

// 13 + 53 + 33 = 1 + 125 + 27 = 153.

// Therefore, it is an Armstrong number.

// Example 2

// Input: n = 12

// Output: false

// Explanation: Number of digits : 2.

// 12 + 22 = 1 + 4 = 5.
// Therefore, it is not an Armstrong number.

    int n=153;
    int org=n;
    int real=n;
    bool arm=true;
    // string num=to_string(n);
    // int len=num.length();
    int count=0;
    double sum=0;

    while(n!=0){
    
        count++;
        
        n/=10;
        
    }
    
    
    while(org!=0){
        int digit=org%10;
        sum=sum+pow(digit,count);
            
        

        org/=10;
        
    }
    if((int)sum==real){
        cout<<"Armstrong";
    }else{
        cout<<"Not Armstrong";
    }
    



    return 0;
}