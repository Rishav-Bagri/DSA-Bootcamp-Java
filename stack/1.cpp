#include <iostream>
#include <stack>
using namespace std;

// goto - https://en.cppreference.com/w/cpp/container/stack
int main(){
    stack <int> s;

    s.push(2);
    s.push(3);
    s.push(3);
    s.push(3);
    s.push(3);
    s.push(3);
    s.push(3);
    s.pop();
    cout<<"top element "<<s.top()<<endl;
    cout<<s.empty()<<endl;
    cout<<"stack size "<<s.size()<<endl;

    cout<<sizeof(s)<<endl;
    return 0;
}