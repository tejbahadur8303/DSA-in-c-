#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create a new node
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Preorder: Root -> Left -> Right
void preorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder: Left -> Root -> Right
void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder: Left -> Right -> Root
void postorder(Node* root) {
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Level Order using a simple array as a queue
void levelOrder(Node* root, int N) {
    if (root == NULL)
        return;

    Node** queue = new Node*[N];

    int front = 0;
    int rear = 0;

    queue[rear++] = root;

    while (front < rear) {
        Node* current = queue[front++];

        cout << current->data << " ";

        if (current->left != NULL)
            queue[rear++] = current->left;

        if (current->right != NULL)
            queue[rear++] = current->right;
    }

    delete[] queue;
}

int main() {

    int N;
    cout << "Enter number of nodes: ";
    cin >> N;

    if (N <= 0) {
        cout << "Tree is empty";
        return 0;
    }

    /*
             1
            / \
           2   3
          / \   \
         4   5   6
    */

    // Example tree
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->right = createNode(6);

    cout << "\nPreorder: ";
    preorder(root);

    cout << "\nInorder: ";
    inorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    cout << "\nLevel Order: ";
    levelOrder(root, N);

    return 0;
}