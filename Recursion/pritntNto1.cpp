#include <iostream>
using namespace std;
int print(int n){
    if(n==0)return 0;
    cout<<n<<endl;       // it is able to print from n to 1 because we are printing before the recursive call
    print(n-1);
}
int main(){
    print(10);
    return 0;
}