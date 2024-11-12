#include <iostream>

using namespace std;

class stack
{
    private:
    int top=-1;
    int *arr= new int[100];
    int size=100;
    
    public:

    void push(int val){
        if(top>=size){
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val; 
    }

    void pop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
        }
        top--;
    }
    int peek(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
        }
        return arr[top];
    }
    bool empty(){
        if(top==-1 )return 1;
        return 0;
    }
    int Size(){
        return top+1;
    }

};
int main(){
    stack s;

    s.push(2);
    s.push(3);
    s.push(3);
    s.push(3);
    s.push(3);
    // s.pop();
    cout<<"top element "<<s.peek()<<endl;
    cout<<s.empty()<<endl;
    cout<<"stack size "<<s.Size()<<endl;
    cout<<sizeof(s)<<endl;
    return 0;
}

