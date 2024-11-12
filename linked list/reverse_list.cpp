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
        void print(){
            cout<< this->data<<" ";
        }
};

void insertnode_head(node* &head,int d){
    node* temp=new node(d);

    temp -> next = head;
    head = temp;
    // cout<< "node contructed"<<endl;
}
void print(node* head){

    // if(head->next==NULL)return;

    head->print();
    head= head->next;
    if(head==NULL)return;
    print(head);
    
}

//approach one
void reverse1(node* &main){
    node* previous=NULL;
    node* head=main;

    node* next=NULL;
    
    
    while (head!=NULL)
    {
        
        next=head->next;
        head->next=previous;
        previous=head;
        head=next;
        
    }
    main=previous;

}


// approach 2  recursion
void reverse2(node* &head,node*  curr,node *  prev){
    if(curr==NULL){
        head=prev;
        return;
    }
    node* forward=curr->next;
    reverse2(head,forward,curr);
    curr->next=prev;
    
    

    
}

int main(){
    node* node1 =new node(1);

    node*head=node1;
    node*tail=node1;
    insertnode_head(head,3333333);

    insertnode_head(head,123);
    insertnode_head(head,-1);
    // insertnode_head(head,2);
    // insertnode_head(head,0);
    print(head);
    cout<<"done"<<endl;
    // reverse1(head);
    node* curr=head;
    node* prev=NULL;
    reverse2(head,curr,prev);
    print(head);

    return 0;
}