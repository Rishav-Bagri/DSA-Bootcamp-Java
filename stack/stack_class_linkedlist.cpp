#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        //constructor
        node(int data){
            this -> data =data;
            this -> next =NULL;

        }
        
};
void insert_at_head(node* &head,int val){
    node* temp=new node(val);
    temp->next=head;
    head = temp;

}
void delete_at_head(node* &head){
    node* temp=head;
    head=head->next;
    delete temp;
}
class stack
{
    private:
    
    node *arr= 0;
    int size=0;
    
    public:

    void push(int val){
        
        size++;
        insert_at_head(arr,val);
    }

    void pop(){
        if(size==0){
            cout<<"stack is empty"<<endl;
            return;
        }
        size--;
        delete_at_head(arr);
    }
    int peek(){
        if(size==0){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        return arr->data;
    }
    bool empty(){
        if(arr )return 1;
        return 0;
    }
    int Size(){
        return size;
    }

};

int main(){
    
    stack s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    cout<<"top element "<<s.peek()<<endl;
    cout<<s.empty()<<endl;
    cout<<"stack size "<<s.Size()<<endl;
    cout<<sizeof(s)<<endl;
    return 0;
}