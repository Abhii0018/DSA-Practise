// // Check first and last character
// // If both are vowels:
// // Reverse the string except first and last
// // Else:
// // Keep string as it is

// #include<iostream>
// #include<vector>
// #include<cctype>
// using namespace std;
// bool checkVowel(char ch){
//     ch=tolower(ch);
//     if(ch=='a'||ch=='o'||ch=='e'||ch=='i'||ch=='u'){
//         return true;
//     }
//     return false;
// }


// //function to process each word.

// string functionWord(string arr){
    
//     int n=arr.size();
   
//         if(checkVowel(arr[0]) && checkVowel(arr[n-1])){
//             int left=1;
//             int right=n-2;
//             while(left<right){
//                 swap(arr[left],arr[right]);
//                 left++;
//                 right--;
//             }
           
            
//         }

//  return arr;
// }
// int main(){

// vector<string> arr = {"applE","bananA","OraNge"};

// for(int i=0; i<arr.size(); i++){
//     arr[i]=functionWord(arr[i]);
// }

// for(int i=0; i<arr.size(); i++){
//     cout<<arr[i]<<" ";
// }


//     return 0;
// }














#include<iostream>
#include<vector>
#include<cctype>
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);

    return ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u';
}

string functionCheck(string arr){
    int n=arr.length();
    if( isVowel(arr[0])==isVowel(arr[n-1])){
        for(int i=1; i<n-2; i++){
            swap(arr[i],arr[n-i]);
        }
    }
}
int main(){
    vector<string> arr={"apPle","waterMeLon","oraNgE"};
    for(int i=0; i<arr.size(); i++){

    }
    return 0;
}











