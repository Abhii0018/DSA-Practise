// Input: N = 3, M = 27

// Output: 3

// Explanation: The cube root of 27 is equal to 3.

// Example 2

// Input: N = 4, M = 69

// Output:-1

// Explanation: The 4th root of 69 does not exist. So, the answer is -1.


#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n=3;
    int m=125;

    // int ans=cbrt(n,m);
    double root=pow(m,1.0/n);

    int ans=round(root);

    long long check=1;
    for(int i=0; i<n; i++){
        check*=ans;
    }
    if(check==m){
        cout<<ans;
    }else{
        cout<<-1;
    }
    
    return 0;
}