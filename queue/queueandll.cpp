#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    

    node(int data){
        this->data=data;
        this->next=NULL;
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
class queue{
    public:
    node* last;
    node* head;
    int size=0;

    queue(){
        size=0;
        head = 0;
        last=0;
    }

    void push(int val){
        node* temp=new node(val);
        if (size==0){
            head=temp;
        }
        else{
            last->next=temp;
        }

        last=temp;
        size++;

        
    }
    void pop(){
        if(size==0){cout<<"empty queue"<<endl;return ;}
        node* temp=head;
        head=head->next;
        size--;
        if (size==0)
        {
            last=0;
        }
        
        delete temp;
    }
    int front(){

        if(size==0){cout<<"empty queue"<<endl;return 0;}
        
        return head->data;
    }
    bool isempty(){
        if(size==0){return 1;}
        return 0;
    }

};



int main(){
    queue q;
    q.push(3);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    
   

    return 0;
}