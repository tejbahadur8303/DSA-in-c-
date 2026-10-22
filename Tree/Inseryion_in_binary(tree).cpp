#include<iostream>
using namespace std;

struct node{
    int data;
    node*left,*right;
    node(int val){
        data =val;
        left = right=NULL;
    }
};

node* Insert_BT(node*root, int key)
{
    if(root ==NULL)
    {
        node* root = new node(key);
        return root;
    }
     queue<node*>q;
     q.push(root);
     while(!q.empty())
     {
        node*temp = q.front();
        q.pop();

        if(temp->left !=NULL){
             q.push(temp->left);

        }


        else{
    temp->left =new node(key);
    return root;
    }

    if(temp->right!=NULL)
    q.push(temp->right);


else{
    temp->right=new node(key);
    return root;
}
     }
}


// Inorder Traversal
void inorder(node* root) {

    if (root == NULL) {
        return;
    }

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}



int main(){
    node * root = new node(15);
    root->left=new node(10);
     root->right=new node(6);
      root->left->left=new node(7);
       root->right->left=new node(8);
        root->right->right=new node(9);

        Insert_BT(root,12);
        inorder(root);
}