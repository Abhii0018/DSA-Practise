#include<iostream>
using namespace std;
int main(){
//     Input: n1 = 4, n2 = 6

// Output: 2

// Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6

// Greatest Common divisor = 2.

// Example 2

// Input: n1 = 9, n2 = 8

// Output: 1

// Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.

// Greatest Common divisor = 1.


int a=9,b=8;
int ans=1;

if(a<b){
    for(int i=1; i<=a; i++){
        if(a%i==0 && b%i==0){
            ans=i;

        }
    }
}else{
    for(int i=1; i<=b; i++){
        if(a%i==0 && b%i==0){
            ans=i;

        }
    }

}
cout<<ans;

    return 0;
}
