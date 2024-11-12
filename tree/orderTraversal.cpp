#include <iostream>

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

//inorder- LNR
//preorder- NLR
//postorder- LRN
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


int main(){
    
    node* root=NULL;

    root=buildTree(root);// 2 3 7 -1 -1 11 -1 -1 13 17 -1 -1 -1
    cout<<endl<<"printing LNR order traversal"<<endl;
    orderTraversal((root));

    return 0;
}