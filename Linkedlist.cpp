// #include<iostream>
// using namespace std;
//  class Node{ 
//     public:
//     int data;
//     Node*next;

//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//  }
// };



//  void display(Node* head){ 

   
//     Node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp= temp->next;
//     }
//     cout<<endl;

//  }

//  int main(){

//      Node*first=new Node(10);
//      Node*second=new Node(20);
//      Node*third=new Node(30);
//      Node*fourth=new Node(40);
//      Node*fifth=new Node(50);

//      first->next=second;
//      second->next=third;
//      third->next=fourth;
//      fourth->next=fifth;


//      cout<<"printing the LL"<<endl;
//      display(first);


//      return 0;

//  }


//insertion aat begning or head Singly linkedlist


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
//  void insertathead(Node* &head, Node* &tail,int data){
//     //check for  empty LL
//     if(head==NULL){
//         Node*newNode=new Node(data);
//         head=newNode;
//         tail = newNode;
//         return;
//     }
//     //step1:
//     Node* newNode =new Node(data);
//     //step 2:
//      newNode->next=head;
//     // step 3:
//     head= newNode;
// }



// void insertatend(Node* &head, Node* &tail,int data){
//     if(head==NULL){
//         Node*newNode=new Node(data);
//         head=newNode;
//         tail = newNode;
//         return;
//     }
//     Node* newNode=new Node(data);
//     tail->next =newNode;
//     tail=newNode;
    
// }
// void display(Node* head){   
//     Node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp= temp->next;
//     }
// cout<<endl;
//  }
// int main(){
//          Node* head=NULL;
//          Node* tail=NULL;
//        insertathead(head,tail,90);
//        insertathead(head,tail,80);
//        insertathead(head,tail,70);
//        insertathead(head,tail,300);
//        insertathead(head,tail,60);
//        insertathead(head,tail,50);
//        insertatend(head,tail,80);
//          display(head);
//           return 0;
// }


//insertion at position /(index)/atend at begnning
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };

// void display(Node* head){   
//     Node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp= temp->next;
//     }
// cout<<endl;
//  }

//  void insertathead(Node* &head, Node* &tail,int data){
//     //check for  empty LL
//     if(head==NULL){
//         Node*newNode=new Node(data);
//         head=newNode;
//         tail = newNode;
//         return;
//     }
//     //step1:
//     Node* newNode =new Node(data);
//     //step 2:
//      newNode->next=head;
//     // step 3:
//     head= newNode;
// }



// void insertatend(Node* &head, Node* &tail,int data){
//     if(head==NULL){
//         Node*newNode=new Node(data);
//         head=newNode;
//         tail = newNode;
//         return;
//     }
//     Node* newNode=new Node(data);
//     tail->next =newNode;
//     tail=newNode;
    
// }



//  void insertionatposition(int position ,int data, Node* &head, Node* &tail){
//     if(head==NULL){
//         Node* newNode= new Node(data);
//         head=newNode;
//         tail=newNode;
//         return ;
//     }

//     if(position ==0){
//         insertathead(head,tail,data);
//         return ;
//     }
//     int i=1;
//     Node*prev = head;
//     while(i<position){
//         prev = prev->next;
//         i++;
//     }
//     Node* curr =prev ->next;
//     Node* newNode =new Node(data);
//     newNode->next=curr;
//     prev->next=newNode;


//  }
// int main(){
//          Node* head=NULL;
//          Node* tail=NULL;
//        insertathead(head,tail,90);
//        insertathead(head,tail,80);
//        insertathead(head,tail,70);
//        insertathead(head,tail,300);
//        insertathead(head,tail,60);
//        insertathead(head,tail,50);
//        insertatend(head,tail,80);

//           display(head);

//          insertionatposition(2,143,head,tail);
//          display(head);
//           return 0;
// }









// #include<iostream>
// using namespace std;


// class Node{
//     public:
//     int data;
//     Node*next;

//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;

//     }

// };




// // void insertathead(Node* &head, int data){
// //     //step1:
// //     Node* newNode=new Node(data);
// //     //step 2:
// //     newNode->next=head;
// //     //step 3:
// //     head=newNode;

// // }

// ///insertion at end
//  void insertatend(Node* &tail, int data){
//     Node* newNode =new Node(data);
  
//     tail = newNode;
// }

// void display(Node* head){ 

   
//     Node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp= temp->next;
//     }
   
// cout<<endl;
//  }






// int main(){
//     // Node*head=NULL;
//        Node*tail=NULL;
   


//     //    insertathead(head,90);
//     //    insertathead(head,80);
//     //    insertathead(head,70);
//     //    insertathead(head,60);
//     //    insertathead(head,50);
//     insertatend(tail,20);
   

//        display(tail);



//     return 0;
// }



// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// // Insert at a given position (0-indexed)
// void insertAtPosition(Node*& head, int data, int position) {
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = nullptr;

//     // Case: Insert at head
//     if (position == 0) {
//         newNode->next = head;
//         head = newNode;
//         return;
//     }

//     // Traverse to node just before target position
//     Node* current = head;
//     for (int i = 0; i < position - 1; i++) {
//         if (current == nullptr) {
//             cout << "Position out of bounds!" << endl;
//             delete newNode;
//             return;
//         }
//         current = current->next;
//     }

//     if (current == nullptr) {
//         cout << "Position out of bounds!" << endl;
//         delete newNode;
//         return;
//     }

//     // Rewire pointers
//     newNode->next = current->next;
//     current->next = newNode;
// }

// void display(Node* head) {
//     while (head != nullptr) {
//         cout << head->data << " -> ";
//         head = head->next;
//     }
//     cout << "NULL" << endl;
// }

// int main() {
//     Node* head = nullptr;

//     // Build list: 10 -> 20 -> 30 -> 40
//     insertAtPosition(head, 10, 0);
//     insertAtPosition(head, 20, 1);
//     insertAtPosition(head, 30, 2);
//     insertAtPosition(head, 40, 3);

//     cout << "Original list:        ";
//     display(head);                   

//     insertAtPosition(head, 99, 0);
//     cout << "Insert 99 at pos 0:   ";
//     display(head);                   

//     insertAtPosition(head, 55, 2);
//     cout << "Insert 55 at pos 2:   ";
//     display(head);                    
//     insertAtPosition(head, 77, 6);
//     cout << "Insert 77 at pos 6:   ";
//     display(head);                    

//     return 0;
// }
































































// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//     public :
//     int data;
//     Node *next;
//     Node(int value){
//         data=value;
//         next=nullptr;
//     }
// };
// int display (Node *head,int item){
//     Node *temp;
//     temp=head;
//     while(temp!=nullptr){
//         if(temp->data==item){
//             return 1;
//         }
//         temp=temp->next;
//     }
//     return 0;
// }
// int main() {
// 	Node *head;
// 	head=new Node(10);
// 	head->next=new Node(20);
// 	head->next->next=new Node(30);
// 	int x;
	
// 	x=display(head,50);
// 	if(x==1){
// 	    cout<<"found";
// 	}
// 	else cout<<"not found";

// }





// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node * next;
//     Node(int value){
//         data = value;
//         next = nullpoint;
//     }
// }

// void display(Node * head){
//     Node * temp;
//     temp=head;
//     while(temp ! =Nullpoint){
//         cout<<temp<<data;
//         temp =temp->next;
//     }
// }

// Noid * insertatbeg(Node *head, int value){
//     Node *n = new Node(value);
//     if(head == Nullpoint){
//         n->next = Nullpoint;
//         head =n;
//     }
//     else{n->next = head;
//     head =n;
// }
// return (head);
// }

// int main(){
//     Node * head;
//     head = new Node(10);
//     head->next =new Node(20);
//     head->next->next = new Node(30);
//     display(head);
//     head = insertatbeg(head , 50);
//     display(head);
// }

//************************deletion at end and begning
// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int value){
//         data =value;
//         next=nullptr;
//     }
// };
// void display(Node *head){
//     Node *temp;
//     temp = head;
//     while(temp!=nullptr){
//         cout<<temp->data;
//         temp = temp->next;
//     }
//     cout<<endl;
   
    
// }

// void deleteatbeg(Node*head){
//     Node*temp;
//     if(head==nullptr){
//         cout<<"node is empty";
//     }else{
//         Node *temp;
//         temp=head;
//         head=temp->next;
        
//     }
//     display(head);
        
//     }
    
    
    
    
    
//  void deleteatend(Node*head){
//      Node*temp;
//      if(head==nullptr){
//          cout<<"node is empty";
//      }
     
//       else{
//           temp =head;
//           while(temp->next->next!=NULL){
//                 temp=temp->next;
//    }
//    temp->next=nullptr;
  
//  }    display(head);
//  } 
     





// int main() {
//     Node*head;
//     head=new Node(10);
//     head->next=new Node(20);
//     head->next->next = new Node(30);
//     display(head);
    
//     deleteatbeg(head);
    
    
//     deleteatend(head);
    
//     return 0;
	

// }






////********deletion at index */
// #include <bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int value){
//         data =value;
//         next=nullptr;
//     }
// };


// void display(Node *head){
//     Node *temp;
//     temp = head;
//     while(temp!=nullptr){
//         cout<<temp->data;
//         temp = temp->next;
//     }
//     cout<<endl;
   
    
// }

// void deleteindex(Node*head){
//     Node*temp;
//     if(head == nullptr){
//         cout<<"node is empty";
//     }
//     int index=0;
//     temp=head;
//     int i;
    
    
    
//     int c[i]=0;
//     while(temp!=NULL && c[i]<index-1){
//         temp=temp->next;
//         c[i]=c[i]+1;
//     }
//     temp->next=temp->next->next;
//     display(head);
        
//     }
    

// int main() {
//     Node*head;
//     head=new Node(10);
//     head->next=new Node(20);
//     head->next->next = new Node(30);
//     display(head);
    
    
    
    
//     deleteindex(head);
    
//     return 0;
	

// }


//**************deletion at target  */
// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int value){
//         data =value;
//         next=nullptr;
//     }
// };


// void display(Node *head){
//     Node *temp;
//     temp = head;
//     while(temp!=nullptr){
//         cout<<temp->data;
//         temp = temp->next;
//     }
//     cout<<endl;
   
    
// }

// void deleteattarget(Node *head, int target){
//     Node *temp;
//     temp=head;
//     if(head == nullptr){
//         cout<<"node is empty";
//     }

//     temp=head;
//     while(temp!=NULL && temp->data!=target){
//         temp=temp->next;
//     }
//     temp->next=temp->next->next;
    
//     display(head);

    
    
    
    
    
        
//     }
    

// int main() {
//     Node*head;
//     head=new Node(10);
//     head->next=new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next=new Node(40);
//     head->next->next->next->next=new Node(50);

    
//     deleteattarget(head,20);
//     display(head);
    
//     return 0;
	

// }


//insertion at begning doubling linkelist
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node*next;
//     Node*prev;
//     Node(int value)
//     {
//         data =value;
//         next =nullptr;
//         prev = nullptr;
//     }
// };


// void display(Node *head){
//     Node*temp;
//     temp = head;
//     while(temp!=NULL){
//         cout<<temp->data;
//         temp =temp->next;
//     }
//     cout<<endl;
// }

// Node * insertatbeg(Node*head,int value){
//     Node*n=new Node(value);;
//     if(head==NULL){
//         head =n;
//         return head;
//     }
//     Node * temp=head;
//     n->next=head;
//     head->prev=n;
//     head=n;
//     return (head);


// }




// int main(){
//     Node*head;
//     head = new Node(10);
//     head->next=new Node(20);
//     head->next->next=new Node(30);
//     head->next->next->next=new Node(40);
//     display(head);
//     head = insertatbeg(head,50);
//     display(head);
//     return (0);
// }





// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node*next;
//     Node*prev;
//     Node(int value)
//     {
//         data =value;
//         next =nullptr;
//         prev = nullptr;
//     }
// };


// void display(Node *head){
//     Node*temp;
//     temp = head;
//     while(temp!=NULL){
//         cout<<temp->data;
//         temp = temp->next;
//     }
//     cout<<endl;
// }

//  Node*insertatend(Node*head,int value){
//      Node*n =new Node(value);
//      if(head==NULL){
//         head = n;
//         return head;

//      }


     
     

    




  
//  }  
   
 

// int main(){
//     Node*head;
//     head = new Node(10);
//     head->next=new Node(20);
//     head->next->next=new Node(30);
//     head->next->next->next=new Node(40);
//     display(head);
//    insertatend(head,50);
//     display(head);
//     return (0);
// }



/////P R A C T I C E 



// #include<iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node*next;

//     Node (int data){
//         this -> data = data;
//         this -> next = NULL;
//     }
// };
// void InsertAtHead(Node * &head, int data){
//     Node* temp = new Node(data);
//     temp ->next =head;
//     head = temp;
// }
// void print (Node* &head){
//     Node* temp = head ;
//     while(temp !=NULL){
//         cout<<temp -> data <<" ";
//         temp = temp -> next;

//     }
//     cout<<endl;

// }
// int main(){
//     Node*node1 = new Node(10);
    

//      Node* head = node1;
//      print(head);
//      InsertAtHead(head, 15);
//      print (head);

//      return 0; 
// }



//INSERTION AT HEAD 

// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(){
//         this->data = 0;
//         this->next = NULL;
//     }

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void InsertAtHead(Node* &head, int data){
//     // for empty list
//     if(head == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         return;
//     }

//     Node* newNode = new Node(data);
//     newNode->next = head;
//     head = newNode;
// }

// void display(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main(){
//     Node* temp = new Node(10);
//     Node* head = temp;

//     display(head);        // Output: 10
//     InsertAtHead(head, 12);
//     display(head);        // Output: 12 10

//     return 0;
// }




//*******INSERTIION AT END */
// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(){
//         this->data = 0;
//         this->next = NULL;
//     }

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// // 🔹 Insert at End
// void InsertAtTail(Node* &head, int data){
//     // if list is empty
//     if(head == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         return;
//     }

//     Node* newNode = new Node(data);
//     Node* temp = head;

//     // go to last node
//     while(temp->next != NULL){
//         temp = temp->next;
//     }

//     // attach new node at end
//     temp->next = newNode;
// }

// // display function
// void display(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main(){
//     Node* head = NULL;

//     InsertAtTail(head, 10);
//     InsertAtTail(head, 20);
//     InsertAtTail(head, 30);

//     display(head);   // Output: 10 20 30

//     InsertAtTail(head, 40);
//     display(head);   // Output: 10 20 30 40

//     return 0;
// }




// insert at position 

// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// // 🔹 Insert at specific position (0-based index)
// void InsertAtPosition(Node* &head, int data, int position){

//     // case 1: insert at head (position = 0)
//     if(position == 0){
//         Node* newNode = new Node(data);
//         newNode->next = head;
//         head = newNode;
//         return;
//     }

//     Node* temp = head;
//     int count = 0;

//     // move to (position - 1) node
//     while(temp != NULL && count < position - 1){
//         temp = temp->next;
//         count++;
//     }

//     // ❗ position out of range
//     if(temp == NULL){
//         cout << "Position out of range" << endl;
//         return;
//     }

//     // insert node
//     Node* newNode = new Node(data);
//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// // display function
// void display(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main(){
//     Node* head = NULL;

//     // create list
//     InsertAtPosition(head, 10, 0);  // 10
//     InsertAtPosition(head, 20, 1);  // 10 20
//     InsertAtPosition(head, 30, 2);  // 10 20 30

//     display(head);

//     // insert at position 1
//     InsertAtPosition(head, 15, 1);  // 10 15 20 30
//     display(head);

//     return 0;
// }

///inserrt after target value

// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// // 🔹 Insert after a target value
// void InsertAfterValue(Node* &head, int target, int data){

//     // if list is empty
//     if(head == NULL){
//         cout << "List is empty" << endl;
//         return;
//     }

//     Node* temp = head;

//     // search for target value
//     while(temp != NULL && temp->data != target){
//         temp = temp->next;
//     }

//     //  target not found
//     if(temp == NULL){
//         cout << "Target not found" << endl;
//         return;
//     }

//     // insert after target node
//     Node* newNode = new Node(data);
//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// // display function
// void display(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main(){
//     Node* head = NULL;

//     // creating list
//     head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);

//     display(head);   // 10 20 30

//     // insert after value 20
//     InsertAfterValue(head, 20, 25);

//     display(head);   // 10 20 25 30

//     return 0;
// }


///deletion at head
// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// // 🔹 Delete head node
// void DeleteAtHead(Node* &head){

//     // case 1: empty list
//     if(head == NULL){
//         cout << "List is empty" << endl;
//         return;
//     }

//     // store current head
//     Node* temp = head;

//     // move head to next node
//     head = head->next;

//     // delete old head
//     delete temp;
// }

// // display function
// void display(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main(){
//     Node* head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);

//     display(head);   // 10 20 30

//     DeleteAtHead(head);
//     display(head);   // 20 30

//     DeleteAtHead(head);
//     display(head);   // 30

//     DeleteAtHead(head);
//     display(head);   // empty

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     set<int > s= {6,7,8};
//     for(int v:s){
//         cout<<v;
//     }
// }

#include <iostream>
#include<set>
#include<utility>
#include<list>
using namespace std;
int main(){

//pair
// pair<string,int>p;
// p.first="tej";
// p.second=23;
// cout<<p.first<<" "<<p.second<<endl;

// pair<string, pair<int,int>>p;
// p.first="tej";
// p.second.first=32;
// p.second.second=23;
// cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;


//List


// list<int> p;
// p.push_back(30);
// p.push_back(13);
// p.push_back(45);
// cout<<p.front();
// p.push_back(23);



// for(auto x : p){
//     cout<<x<<" ";//
//
//}

// int main() {
//     set<int> s1 = {1,2,3,4,5,6};
//     set<int> s2 = {7,8,9};
//     set<int> s3 = {23,45,67};
//     set<int> s4;

//     s4.insert(next(s1.begin(),0), next(s1.begin(),3));
//     s4.insert(s2.begin(), s2.end());
//     s4.insert(s3.begin(), s3.end());
//     s4.erase(67);

//     for(auto x : s4){
//         cout << x << " ";



set<int>s1;
set<int>s1;
set<int>s3;
int n,x,y;
cin>>n;
for(int i=0; i<n; i++){
    cin>>x;
    s1.insert(x);

}

for(int i=0; i<n; i++){
    cin>>y;
    s2.insert(y);
}
// write a program two set s1 and s2 find out the new set in which we have common value of s1 & s2
//    int count =0; 
//   int c=0;
//   for(int v:s){
//     c=count()
//   }



/// write a program input two sets print create a new set of all the element that are present in  set a but not in  set b//
// 



//you are given two array having M and N integer, let P be the no. of elements in the first array but not in the second array . let Q be the no. of element in the second but not in the first  print the value of P*Q/

//given an array of N interger print the  unique element from the array from increasig order also print the unique element?/
   

   }



//    #include <bits/stdc++.h>
// using namespace std;

// int main() {
// set<int>s1;
// set<int>s2;
// set<int>s3;
// int n,x,y;
// cin>>n;
// for(int i=0; i<n; i++){
//     cin>>x;
//     s1.insert(x);

// }

// for(int i=0; i<n; i++){
//     cin>>y;
//     s2.insert(y);
// }
// // set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s3,s3.begin()));



// set_union(s1.begin(), s1.end(), s2.begin(), s2.end(),back_inserter(out));
//  for(int v:s3){
//      cout<<v;
//  }

// }




   

   





// #include<bits/stdc++.h>
// using namespace std;
//  class Node{
//      public:
//      int data;
//      Node *next;
//      Node *prev;
     
//      Node(int value){
//          data = value;
//          next= nullptr;
//          prev = nullptr;
//      }
//  };
 
//  void display(Node* head){
//      Node *temp = head;
//      while(temp!=nullptr){
//          cout<<temp->data<<" ";
//          temp=temp->next;
//      }
//  }
 
//  Node *insertAtbeg(Node *head, int value){
//      Node *n=new Node(value);
//      Node *temp = head;
//      while(temp ==nullptr){
//          head =n;
//          return head;
//      }
//      n ->next =head;
//      head->prev=n;
//      head =n;
//      return head;
//  }
//  int main(){
//      Node *head;
//      head =new Node(19);
//      head->next = new Node(22);
//      head->next->prev=head;
     
//      head->next->next= new Node(77);
//      head->next->next->prev=head->next;
//      display(head);
//      cout<<endl;
//      head = insertAtbeg(head,11);
//      display(head);
     
//  }

wap to create an unorderd map to insert roll no. of students and name ?
s