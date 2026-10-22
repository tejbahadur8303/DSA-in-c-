#include<iostream>
using namespace std;

struct node
{
    int val;
    node *left;
    node *right;
    node(int data)
    {
        val = data;
        left = right = NULL;
    }
};




int sumofnode(node *root)
{
    if(root == NULL)
     return 0;
    int sum =0;
    sum +=root -> val;

     return sum + sumofnode(root->left) + sumofnode   (root->right);


}

int main(){
    node *root =new node('A');
    root ->left=new node('B');
    root->right =new node('C');
    root ->left->left=new node('D');
    root ->left->right=new node('E');

    cout<<"Sum of node = "<<sumofnode(root)<<endl;
}