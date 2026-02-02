// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[]={1,2,2,3,4,5,6};
//     int arr2[]={2,4,8,9};
//     int len1=sizeof(arr1)/sizeof(arr1[0]);
//     int len2=sizeof(arr2)/sizeof(arr2[0]);

//     // int *arr3=new int[];

//     for(int i=0; i<len1; i++){
//         for(int j=0; j<len2; j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<" ";
//             }
            
//         }
//     }
    
//     return 0;
// }

// Method 2:--Optimize way.....


// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int main(){
//     int arr1[]={1,2,2,3,4,5,6};
//     int arr2[]={2,4,8,2,9};
//     int len1=sizeof(arr1)/sizeof(arr1[0]);
//     int len2=sizeof(arr2)/sizeof(arr2[0]);

//     unordered_set<int> s;
//     for(int i=0; i<len1; i++){
//         s.insert(arr1[i]);
//     }

    

//     for(int i=0; i<len2; i++){
//         if(s.find(arr2[i])!=s.end()){
//             cout<<arr2[i]<<" ";
//             s.erase(arr2[i]);      // it will remove duplicate element
//         }
//     }
//     cout<<endl;

//     return 0;
// }



// same optimization is also workking with unordered_set  for unsorted array

#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int arr1[]={5,3,2,10,11,12};
    int arr2[]={1,5,11,2,3,11,10};
    int len1=sizeof(arr1)/sizeof(arr1[0]);
    int len2=sizeof(arr2)/sizeof(arr2[0]);

  unordered_set<int> s;

  for(int i=0; i<len1; i++){
    s.insert(arr1[i]);
  }

  for(int i=0; i<len2; i++){
    if(s.find(arr2[i])!=s.end()){
        cout<<arr2[i]<<" ";
        s.erase(arr2[i]);
    }
  }
  cout<<endl;

    return 0;
}