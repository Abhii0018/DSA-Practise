#include<iostream>
using namespace std;


void print(int n){
    if(n==0)return;
     print(n-1);
     cout<<n<<endl;       // it is sbale to print from 1 to n because function call stack is LIFO
}
int main(){
    print(10);
    return 0;
}
