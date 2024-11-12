#include <iostream>
#include <queue>
using namespace std;

int main(){
    deque <int>  q;

    q.push_front(10);
    q.push_front(20);
    q.push_back(30);
    q.push_back(40);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop_front();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    

    return 0;
}