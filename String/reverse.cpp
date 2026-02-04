// Reverse a string

// Method 1:- Using Brute force.....

// #include<iostream>
// using namespace std;
// int main(){
//     string str="Hello";
//     int n=str.length();
//     for(int i=n-1; i>=0; i--){
//         cout<<str[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// Method 2:----------------

#include<iostream>
using namespace std;
int main(){
     string str="Hello Abhi";
     int n=str.length();

     for(int i=0; i<n/2; i++){
        swap(str[i],str[n-i-1]);
     }

     cout<<str<<" ";

   

    return 0;
}