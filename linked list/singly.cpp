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

//insert
void insertnode_head(node* &head,int d){
    node* temp=new node(d);

    temp -> next = head;
    head = temp;
    // cout<< "node contructed"<<endl;
}
void insertnode_tail(node* &tail,int d){
    node* temp=new node(d);

    tail -> next = temp;
    temp -> next = NULL;
    tail =temp;
    
    // cout<< "node contructed"<<endl;
}
void insertnode_pos(node* &tail,node* &temphead,int d,int pos){

    // insert at start
    if(pos==1){
        insertnode_head(temphead,d);
        return;
    }

    node* head=temphead;

    node* temp=new node(d);
    for (int i = 2; i < pos; i++)
    {
        head=head->next;
    }

    if(temp->next==NULL){
        insertnode_tail(tail,d);
        return;
    }

    

    temp->next=head->next;
    head->next=temp;

    

}

//delete
void delete_at_pos(int position,node* & mainhead){
    node* head=mainhead;

    if (position==1)
    {
        mainhead=mainhead->next;
        delete head;
        return;
    }
    

    while (position-2>0)
    {
        position--;
        head=head->next;
    }
    node * temp=head->next;
    head->next=head->next->next;
    delete temp;
    
}

void print(node* head){

    // node* temp=head;
    // cout<<"start"<<endl;
    // while (temp!=NULL)
    // {
    //     temp->print();
    //     temp=temp->next;

        
    // }
    // cout<<endl;


    head->print();
    head= head->next;
    if(head==NULL)return;
    print(head);
}

int main(){
    
    node* node1 =new node(10);
    cout << node1 -> data <<endl;
    cout << node1 -> next <<endl;
    node*head=node1;
    node*tail=node1;
    insertnode_head(head,8);
    
    insertnode_head(head,6);
    insertnode_head(head,4);
    insertnode_pos(tail,head,7,5);
    print(head);

    cout<<endl;



    delete_at_pos(3,head);

    print(head);

    return 0;
}