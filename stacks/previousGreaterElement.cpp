#include<iostream>
#include<stack>
using namespace std;

void previousGreater(int arr[],int len){
    stack<int> st;

    int ans[len];
    //because no element is present before the first element which can be greater, than first element 
    ans[0]=-1;
    st.push(arr[0]);
    for(int i=1 ;i<len; i++){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }

        if(st.empty()){
            ans[i]=-1;
        }else{
            ans[i]=st.top();
        }

        st.push(arr[i]);
    }

    for(int i=0; i<len; i++){
        cout<<ans[i]<<" ";
    }cout<<endl;


}

int main(){
    int arr[]={3,1,2,5,4,6,2,3};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    previousGreater(arr,len);

    return 0;
}

 