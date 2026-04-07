// sum of numbers from 1 to n − sum of array elements


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,5,4,3};
//     int n=5;
//     int len=4;
//     int sum=0;
//     for(int i=0; i<4; i++){
//         sum+=arr[i];
//     }

//     int total=(n*(n+1))/2;
//     cout<<"Missing number is: "<<total-sum;

//     return 0;
// }


#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,5,4,3};
    int n=4;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    //calulate the max and then calculate the total sum

    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    int finalSum=(max*(max+1))/2;

    int ans=finalSum-sum;
    cout<<ans;

    

    return 0;
}