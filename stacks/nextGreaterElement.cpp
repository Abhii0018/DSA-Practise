
//Brute foce method........................time is O(Nsquare) space is o(N)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={3,1,2,7,4,6,2,3};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<len; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     //create a new array
//     int nge[len];
//     for(int i=0; i<len; i++){
//         nge[i]=-1;
//         for(int j=i+1; j<len; j++){
//             if(arr[j]>arr[i]){
//                 nge[i]=arr[j];
//                 break;
//             }
//         }
//     }

//     for(int i=0; i<len; i++){
//         cout<<nge[i]<<" ";
//     }
//     cout<<endl;

// }


//optimize way using stack.  Note TIme and space sboth are O(N)

// #include<iostream>
// #include<stack>
// using namespace std;

// void nextGreater(int arr[],int len){

//     stack<int> st;
//     int ans[len];
//     ans[len-1]=-1;
//     st.push(arr[len-1]);


//     for(int i=len-2; i>=0; i--){
        
// //pop all the element smaller than arr[i]
//         while(st.size()>0 && st.top()<=arr[i]){
//             st.pop(); 
//         }

// // mark the ans 
//     if(st.size()==0){
//         ans[i]=-1;
//     }else{
//         ans[i]=st.top();
//     }  

//         st.push(arr[i]);
 

//     } 
    
//     for(int i=0; i<len; i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl; 
// }

// int main(){
//     int arr[]={3,1,2,5,4,6,2,3};
//     int len=sizeof(arr)/sizeof(arr[0]);

//     for(int i=0; i<len; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     nextGreater(arr,len);
    

//     return 0;
// }










//solve the same question using stack

#include<iostream>
#include<stack>
using namespace std;

void nextGreater(int arr[],int len){

    stack<int> st;
    //push the last element of array
    st.push(arr[len-1]);
    
    int ans[len];
    //always last elemet will be -1 because no one can be greater than last element
    ans[len-1]=-1;


    //loop started from end and i started from second last element because last element i already pushed in stack 
    for(int i=len-2; i>=0; i--){

        // delete the all element from stack which is smaller than arr[i]
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }

        //we are checking first that after deleting the smaller number is stack is empty if it empty meand there is no any element which is greater than current element, and if therte is any element is rest in stack ,it means it is greater than curent element
        if(st.empty()){
            ans[i]=-1;
        }else{
            ans[i]=st.top();
        }

        //we are pushing the current element is stack ust because it may be chnace that next element s smaller than current elemnt so in that case it will be answer
        st.push(arr[i]);
    }

    //finally print the ans array

    for(int i=0; i<len; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int arr[]={3,4,4,5,4,6,2,3};
    int len=sizeof(arr)/sizeof(arr[0]);

    //printing original array

    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    nextGreater(arr,len);

    return 0;
}
