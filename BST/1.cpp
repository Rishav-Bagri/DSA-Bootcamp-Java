#include <iostream>
#include <queue>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int x):data(x){
        this->left=0;
        this->right=0;
    }
};

node* insertAtTree(node* &root,int d){
    if (root==0)
    {
        root=new node(d);
        return root;
    }
    if(root->data<d){
        root->right=insertAtTree(root->right,d);

    }
    else{
        root->left=insertAtTree(root->left,d);
    }
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
void orderTraversal(node* root){
    if (root==NULL)
    {
        return;
    }

    // LNR


    orderTraversal(root->left);//left (L)
    orderTraversal(root->right);//right (R)
    cout<<root->data<<"  ";//node (N)

    
}
void takeInput(node* &root){
    int n;
    cin>>n;
    while (n!=-1)
    {
        root=insertAtTree(root,n);
        cin>>n;
    }
    
}
node* minival(node* root){
    if(root==0)return 0;
    if(root->left==0)return root;
    minival(root->left);
    return root;
}
node* deleteFromBST(node* root,int val){
    if(!root)return NULL;

    if(root->data==val){
        if(root->left==0 && root->right==0){delete root;return 0;}
        else if(root->left && root->right==0){node* temp=root;delete temp;return root->left;}
        else if(root->left==0 && root->right){node* temp=root;delete temp;return root->right;}
        else {
            int mini=minival(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root;
        }
    }   
    else if(root->data>val){
        root->left=deleteFromBST(root->left,val);
    }
    else{
        root->right=deleteFromBST(root->right,val);
    }
    return root;
    
}

int main(){
    node* root=0;

    takeInput(root);
    deleteFromBST(root,30);
    levelOrderTraversal(root);
    return 0;
}