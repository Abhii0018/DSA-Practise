#include<iostream>
#include<stack>
using namespace std;
class StackUsingSTL{
    stack<int> s;
};
int main(){
    stack <int> s;
    s.push(10);

    s.pop();
    cout << s.top() << endl;

    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    s.pop();

    cout << s.top() << endl;

    return 0;
}