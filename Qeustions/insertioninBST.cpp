
#include <iostream> // LC=958
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int data)
    {
        val=data;
        right=left=NULL;
    }


};
Node* insertionBST(Node* &root,int value,queue<Node*>&q)
{
    Node* newnode=new Node(value);
    if(root==NULL)
    {
        root= newnode;
        q.push(root);
        return root;
    }
    Node* curr=q.front();
    if(curr->left==NULL)
    {
        curr->left=newnode;
    }
    else if(curr->right==NULL)
    {
        curr->right=newnode;
        q.pop();
    }
    q.push(newnode);
    return root;
}
vector<vector<int>> levelOrderTraversal(Node* root){
     vector<vector<int>> result;
        if(root==NULL)
        {
            return result;
        }
        queue< Node*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>visited;
            int level=q.size();
            for(int i=0;i<level;i++)
            {
                 Node* curr=q.front();
                q.pop();
                visited.push_back(curr->val);
                if(curr->left!=NULL)
                {
                    q.push(curr->left);
                }
                if(curr->right!=NULL)
                {
                    q.push(curr->right);
                }
                
            }
            result.push_back(visited);
        }
        return result;
} 
int main() {
    vector<int> values={1,2,3,4,5,6,7,8,9};
    Node* root=NULL;
    queue<Node*>q;
    for(int i=0;i<values.size();i++)
    {
        insertionBST(root,values[i],q);
    }
    vector<vector<int>> result=levelOrderTraversal(root);
    for(int i = 0; i < result.size(); i++)
    {
        for(int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;


    }
    return 0;
}






