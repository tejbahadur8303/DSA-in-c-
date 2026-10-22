// #include<iostream>
// using namespace std;
//  vector<vector<int>>levelOrder(node* root){
//     vector<vector<int>>result;
//     if(root == NULL)
//     return result;
//  queue < node* >q;
//  q.push(root);
//  while(!q.empty())
//  {
//     vector<int>visited;
//     int level =q.size();
//     for(int i=0; i<level; i++)
//     {
//         node*curr = q.front();
//         q.pop();

//         visited push_back(curr->data);
//         if(curr->left !=NULL)
//         q.push(curr->left);
//         if(curr->right !=NULL)
//         q.push(curr->right)
//     }
//     result push_back(visited);

//  }
//  return result;
//  }








#include<iostream>
using namespace std;

    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        if(root==NULL)
        {
            return result;
        }
        queue<Node*>q;
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
                if(curr->right!=NULL)
                {
                    q.push(curr->left);
                }
                if(curr->left!=NULL)
                {
                    q.push(curr->right);
                }
                
            }
            result.push_back(visited);
        }
        return result;
    }