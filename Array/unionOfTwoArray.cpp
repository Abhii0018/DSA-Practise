//union of two Array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[]={85,25,1,32,54,6};
//     int arr2[]={85,2};

//     int len1=sizeof(arr1)/sizeof(arr1[0]);
//     int len2=sizeof(arr2)/sizeof(arr2[0]);

//     int count=len1+len2;

//     // method 1:--

//     for(int i=0; i<len1; i++){
//         for(int j=0; j<len2; j++){
//             if(arr1[i]==arr2[j]){
//                 count--;
//             }

//         }
//     }
//     cout<<"No of Unique elee=ment in both array is: "<<count<<endl;



//     return 0;
// }

// Method 2:--optimize way of solving this question using unordered_set


#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

  int arr1[]={85,25,1,32,54,6};
  int arr2[]={85,2};

    // int len1=sizeof(arr1)/sizeof(arr1[0]);
    // int len2=sizeof(arr2)/sizeof(arr2[0]);

    unordered_set<int> s;
    for (int x:arr1){
        s.insert(x);
    }

    for(int x:arr2){
        s.insert(x);
    }

    int count=s.size();
    cout<<"No of Unique element in both array is: "<<count<<endl;

    return 0;
}
