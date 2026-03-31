// #include<iostream>
// #include<vector>
// using namespace std;

// class Stack{
// public:
//     vector<int> arr;

//     // push
//     void push(int val){
//         arr.push_back(val);
//     }

//     // pop
//     void pop(){
//         if(arr.empty()){
//             cout << "Stack is empty\n";
//             return;
//         }
//         arr.pop_back();
//     }

//     // peek
//     int peek(){
//         if(arr.empty()){
//             cout << "No element in stack\n";
//             return -1;
//         }
//         return arr.back();
//     }

//     // length
//     int stackLength(){
//         return arr.size();
//     }

//     // isEmpty (extra useful)
//     bool isEmpty(){
//         return arr.empty();
//     }
// };

// int main(){
//     Stack st;

//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     st.push(6);  // ✅ no problem (auto resize)

//     cout << st.stackLength() << endl;  // 6
//     cout << st.peek() << endl;         // 6

//     st.pop();
//     cout << st.peek() << endl;         // 5

//     return 0;
// }










#include<iostream>
#include<vector>
using namespace std;

class Stack{
public:
    vector<int> arr;

    void push(int val){
        arr.push_back(val);
    }

    void pop(){
        if(arr.empty()){
            cout<<"Stack is empty/n";
            return;
        }
        arr.pop_back();
    }

    int peek(){
         if(arr.empty()){
            cout<<"No element is stack"<<endl;
            return -1;
        }

        return arr.back();
    }

    int stackLength(){
        
        return  arr.size();
    }

    bool isEmpty(){
        return arr.empty();
    }

    void display(){
        if(arr.empty()){
            cout<<"Stack is Empty";
            return;
        }
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<" "<<endl;
        }
    }
};
int main(){
    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);  // ✅ no problem (auto resize)

    // cout << st.stackLength() << endl;  // 6
    st.display();
    // cout << st.peek() << endl;         // 6
    return 0;
}





















