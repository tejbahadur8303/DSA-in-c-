// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     Node(int value) {
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
// };

// // Insert into BST
// Node* insert(Node* root, int value) {
//     if (root == NULL)
//         return new Node(value);

//     if (value < root->data)
//         root->left = insert(root->left, value);
//     else if (value > root->data)
//         root->right = insert(root->right, value);

//     return root;
// }

// // Inorder traversal
// void inorder(Node* root) {
//     if (root == NULL)
//         return;

//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// // Find minimum node
// Node* findMin(Node* root) {
//     while (root->left != NULL)
//         root = root->left;

//     return root;
// }

// // Delete from BST
// Node* deleteNode(Node* root, int key) {
//     if (root == NULL)
//         return root;

//     // Search for the node
//     if (key < root->data) {
//         root->left = deleteNode(root->left, key);
//     }
//     else if (key > root->data) {
//         root->right = deleteNode(root->right, key);
//     }
//     else {
//         // Case 1: No child
//         if (root->left == NULL && root->right == NULL) {
//             delete root;
//             return NULL;
//         }

//         // Case 2: Only right child
//         if (root->left == NULL) {
//             Node* temp = root->right;
//             delete root;
//             return temp;
//         }

//         // Case 3: Only left child
//         if (root->right == NULL) {
//             Node* temp = root->left;
//             delete root;
//             return temp;
//         }

//         // Case 4: Two children
//         Node* temp = findMin(root->right);

//         root->data = temp->data;

//         root->right = deleteNode(root->right, temp->data);
//     }

//     return root;
// }

// int main() {
//     Node* root = NULL;

//     // Create BST
//     int values[] = {2,4,5,7,8,10,11,12,15,16,20,25,30};

//     for (int value : values) {
//         root = insert(root, value);
//     }

//     // Initial inorder
//     cout << "Initial Inorder: ";
//     inorder(root);
//     cout << endl;

//     // Delete 30
//     root = deleteNode(root, 30);

//     cout << "After deleting 30: "<<endl;
//     inorder(root);
//     cout << endl;

//     // Delete 2
//     root = deleteNode(root, 2);

//     cout << "After deleting 2: "<<endl;
//     inorder(root);
//     cout << endl;




    
//     root = deleteNode(root, 15);

//     cout << "After deleting 15: "<<endl;
//     inorder(root);
//     cout << endl;





//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int binary[32], i = 0;

//     while (n > 0) {
//         binary[i++] = n % 2;
//         n /= 2;
//     }

//     for (int j = i - 1; j >= 0; j--)
//         cout << binary[j];

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int a[n];

//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     int max1 = a[0], max2 = a[1];
//     int min1 = a[0], min2 = a[1];

//     if (max2 > max1) swap(max1, max2);
//     if (min2 < min1) swap(min1, min2);

//     for (int i = 2; i < n; i++) {
//         if (a[i] > max1) {
//             max2 = max1;
//             max1 = a[i];
//         }
//         else if (a[i] > max2) {
//             max2 = a[i];
//         }

//         if (a[i] < min1) {
//             min2 = min1;
//             min1 = a[i];
//         }
//         else if (a[i] < min2) {
//             min2 = a[i];
//         }
//     }

//     cout << max(max1 * max2, min1 * min2);

//     return 0;
// }