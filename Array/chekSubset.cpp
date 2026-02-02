// // check one array is subset of other

// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[]={11,1,13,21,3,7};
//     int arr2[]={11,1,7,9,3};
//     bool subset=true;

//     int len1=sizeof(arr1)/sizeof(arr1[0]);
//     int len2=sizeof(arr2)/sizeof(arr2[0]);

//     for(int i=0; i<len2; i++){
//         bool found=false;
//         for(int j=0; j<len1; j++){
//             if(arr2[i]==arr1[j]){
//                 found=true;
//                 break; 
//             }
//         }
//         if(!found){
//             subset=false;
//             break;
//         }
//     }

//     if(subset){
//         cout<<"Arr2 Is subset of Arr1";
//     }else{
//         cout<<"Arr2 Is not subset of Arr1";
//     }
    

//     return 0;
// }



//optimize code uisng hash set 

//step1:- Store the elle elemnt in set
//step2:- now compare the all eleement of arr2 in set, and stop emmidiately when no any element found.



// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int main(){
//     int arr1[]={11,1,13,21,3,7};
//     int arr2[]={1,21,1,3,11};

//     int len1=sizeof(arr1)/sizeof(arr1[0]);
//     int len2=sizeof(arr2)/sizeof(arr2[0]);


//     unordered_set<int> s;

//     bool subset=true;

//     //inserting all elements of arr1 in s
//     for(int i=0; i<len1; i++){
//         s.insert(arr1[i]);
//     }

// //     //Now check all element of arr2 is presnt on s or not

//     for(int i=0; i<len2; i++){
//         if(s.find(arr2[i])==s.end()){
//             subset=false;
//             break;
//         }
//     }

//     //if subset is true then arr2 is subset of arr1

//      if(subset){
//         cout<<"Arr2 Is subset of Arr1";
//     }else{
//         cout<<"Not Subset";
//     }
    


//     return 0;
// }
















// optimize code for check on earay is subset of other or not


// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int main(){
//     int arr1[]={5,6,3,45,3,8,2};
//     int arr2[]={2,45,8,3,6};

//     int len1=sizeof(arr1)/sizeof(arr1[0]);
//     int len2=sizeof(arr2)/sizeof(arr2[0]);

//     // int len=len1+len2;

//     bool subset=true;
//     unordered_set<int> s;
//     // step1:- Insert all element of arr1 in s

//     for(int i=0; i<len1; i++){
//         s.insert(arr1[i]);
//     }

    
    
//     for(int i=0; i<len2; i++){
//         if(s.find(arr2[i])==s.end()){
//             subset=false;
//             break;
//         }
//     }
//     if(subset){
//         cout<<"Arr2 is subset of arr1";
//     }else{
//         cout<<"Not Subset";
//     }
//     return 0;
// }










