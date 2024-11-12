#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* prev;
        node* next;

        node(int d){
            this->data=d;
            this->next=NULL;
            this->prev=NULL;
        }
        
};
void insert_at_head(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insert_at_tail(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insert_at_pos(int position,node* &head,node* &tail,int d){
    node* temp=new node(d);
    node* temphead=head;

    //first pos
    if (position==1)
    {
        insert_at_head(head,d);
        return;
    }
    while (position>2)
    {
        position--;
        temphead=temphead->next;
        
    }
    //last node
    if (temphead->next==NULL)
    {
        insert_at_tail(tail,d);
        return;
    }
    
    //logic for inserting
    temp->next=temphead->next;
    temphead->next->prev=temp;
    temp->prev=temphead;
    temphead->next=temp;
    
}
void delete_at_pos(int position,node* &head,node* &tail){
    node* temp=head;
    if (position<1)
    {
        return;
    }
    
    if (position==1)
    {
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    
    while (position>2)
    {
        position--;
        temp=temp->next;
        
    }

    node * d=temp->next;
    if (temp->next->next==NULL)
    {
        temp->next=NULL;
        d->prev=NULL;
    }
    else
    {
        temp->next=temp->next->next;
        temp->next->prev=temp;
        d->next=NULL;
        d->prev=NULL;
    }
    delete d;
    
}
int getlength(node* head){
    node*temp=head;
    int c=0;
    while (temp!=NULL)
    {
        temp=temp->next;
        c++;
    }
    return c;
}
void print(node* &head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* node1=new node(10);
    node*head=node1;
    node*tail=node1;

    print(head);

    insert_at_tail(tail,11);
    print(head);
    
    insert_at_head(head,3);
    print(head);
    
    insert_at_head(head,1);
    print(head);
    
    insert_at_pos(5,head,tail,5);
    print(head);
    
    delete_at_pos(3,head,tail);
    print(head);

    return 0;
}