// //brute force for finding minimum number in array time complexity is O(N)
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={8,5,9,1,2,4};
//     int len=6;
//     int min=INT_MAX;
    
//     for(int i=0; i<len; i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<"Minimum number present in array: "<<min;

//     return 0;
// }

// brute force for finding maximum number in array time complexity is O(N)
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={8,5,9,1,2,4};
//     int len=6;
//     int max=INT_MIN;
    
//     for(int i=0; i<len; i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"Maximum number present in array: "<<max;

//     return 0;
// }

// now do it uisng minimum number of comparison

#include <iostream>
using namespace std;
int main(){
    int arr[]={8,5,9,1,2,4};
    int len=6;
    int max=INT_MIN;
    
    for(int i=0; i<len; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum number present in array: "<<max;

    return 0;
}