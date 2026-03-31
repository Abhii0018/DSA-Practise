#include<iostream>
#include<stack>
using namespace std;
void stockSpan(int arr[],int len){
    stack<int> st;
    int ans[len];   //prev greater element index array 

    ans[0]=-1;            
    st.push(0);    
   

    for(int i=1; i<len; i++){

        
            while(!st.empty() && st.top()< arr[i]){ //it will increase the count and also delete the minimum number then current array
                st.pop();
            }
              
            st.push(i);

        }

        if(st.empty()){

        }else{

        }
    

    for(int i=0; i<len; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
int main(){

int arr[]={100,80,60,81,70,60,75,85};


int len=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<len; i++){
    cout<<arr[i]<<" "; 
}
cout<<endl;

stockSpan(arr,len);

    return 0;
}   