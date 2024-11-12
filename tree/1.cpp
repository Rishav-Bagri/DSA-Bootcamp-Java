#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int data){
        this->data=data;
        this->left=0;
        this->right=0;
    }
    node(int data,node*left){
        this->data=data;
        this->left=left;
        this->right=0;
    }
    node(int data,node*left,node*right){
        this->data=data;
        this->left=left;
        this->right=right;
    }
};

node* buildTree(node* root){
    cout<<"enter the data : ";
    int data;
    cin>>data;
    root= new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter data to the left of "<<data<<endl;
    root->left=buildTree(root->left);
    
    cout<<"enter data to the right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;

}

void levelOrderTraversal(node* root){
    queue< node* > q;
    q.push(root);
    q.push(NULL);

    while (q.size())
    {
        node* temp=q.front();
        
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
            
        }
        else{
            cout<<temp->data<< "  ";
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
        
    }
    
}
void reverselevelOrderTraversal(node* root){
    queue< node* > q;
    stack< node* > st;
    q.push(root);
    q.push(NULL);

    while (q.size())
    {
        node* temp=q.front();
        
        q.pop();
        if(temp==NULL){
            cout<<endl;
            st.push(temp);
            if (!q.empty())
            {
                q.push(NULL);
            }
            
        }
        else{
            cout<<temp->data<< "  ";
            st.push(temp);
            if(temp->right)q.push(temp->right);
            if(temp->left)q.push(temp->left);
        }
        
    }
    
    
    while (st.size())
    {
        
        if(st.top()==NULL){
            cout<<endl;
            st.pop();
        }
        else{
            cout<<st.top()->data<<" ";
            
            st.pop();
        }
    }
    
    
}
int main(){
    
    node* root=NULL;

    root=buildTree(root);// 2 3 7 -1 -1 11 -1 -1 13 17 -1 -1 -1
    cout<<endl<<"printing level order traversal"<<endl;
    levelOrderTraversal(root);
    reverselevelOrderTraversal(root);

    return 0;
}