// #include <iostream>
// using namespace std;
// int queue[100];
// int last=-1;
// int first=0;
// void enqueue(){
//     int x;
//     cin>>x;
//     last++;
//     if(last==100) return;
//     queue[last]=x;
// }
// int dequeue(){
//     if(first<0){
//         cout<<"UNDERFLOW"<<'\n';
//         return -1;
//     }
//     int res=queue[first];
//     first++;
//     return res;
// }
// void display(){
//     for(int i=first;i<=last;i++){
//         cout<<queue[i]<<" ";
//     }
// }
// int main() {
//     enqueue(9);
//     enqueue(1);
//     enqueue(1);
//     enqueue(1);
//     enqueue(1);
//     enqueue(1);
//     enqueue(5);
//     dequeue();
//     display();
//     int choice;
//     do{
//         cin>>choice;
//         switch(choice){
//             case 1: enqueue();
//             break;
//             case 2: dequeue();
//             break;
//             case 3 : display();
//             break;
//             default:cout<<"wrong choice";
//         }
//     }while(choice<=3);
    
// }


// #include<iostream>
// using namespace  std;
// int queue[100];
// int last=-1;
// int first =0;

// void enqueue(){
//     int x;
//     cin>>x;
//     last++;
//     if((last==100 && first==0)|| first==last +1) {
//         cout<<"overflow";
//         return ;

//     queue[last]=x;

// }

// int dequeue(){
//     if(first<0 ){
//         cout<<"UNDERFLOW"<<'\n';
//         return -1;
//     }
//     int res=queue[first];
//     first++;
//     return res;
// }

//  void display(){
//     for(int i=first;i<=last;i++){
//         cout<<queue[i]<<" ";
//     }
// }

// int main(){

//     int choice;
//     do{
//         cin>>choice;
//         switch(choice){
//             case 1: enqueue();
//             break;
//             case 2: dequeue();
//             break;
//             case 3 : display();
//             break;
//             default:cout<<"wrong choice";
//         }
//     }while(choice<=3);
    
// }

// }


///. Dequeue (Doubly Ended Queue)
// #include <iostream>
// using namespace std;
// int arr[5];
// int last = -1,first = -1;
// int sz = 0;
// void push_front(){
//     int x;
//     cin>>x;
//     if(sz==5) {
//         cout << " OVERFLOW\n" ;
//     }
//     else if(sz == 0){
//         first++;
//         arr[first]=x;
        
//     }
//     else if(first == -1){
//         first=4;
//         arr[first]=x;
        
//     }
//     else{
//         first--;
//         arr[first]=x;
//     }
//     sz++;
// }
// int pop_back(){
//     if(sz==0) {
//         cout<<"UNDERFLOW\n";
//         return -1;
//     }
//     else if(last==0){
//         int ans=arr[last];
//         last=4;
//         return ans;
//     }
//     else {
//         int ans=arr[last];
//         last--;
//         return ans;
//     }
//     sz--;
// }
// void enqueue(){
//     int x;
//     cin>>x;
//     if(sz==5) cout<<"OVERFLOW\n";
//     else{
//         last++;
//         arr[last]=x;
//         sz++;
//     }
// }
// int dequeue(){
//     if(sz == 0) {
//         cout<<" UNDERFLOW\n ";
//         return -1;
//     }
//     else if(first==4){
//         int ans=arr[first];
//         first=0;
//         return ans;
//     }
//     else {
//         int ans=arr[first];
//         first++;
//         return ans;
//     }
//     sz--;
// }
// void display(){
//     if(first > last){
//         for(int i = first; i < 5;i++){
//             cout<<arr[i]<<" ";
//         }
//         for(int i=0;i<=last;i++){
//             cout<<arr[i]<<" ";
//         }
//     }
//     else {
//         if(first == -1) first = 0;
//         for(int i = first;i <= last;i++){
//             cout<<arr[i]<<" ";
//         }
//     }
//     cout<<'\n';
// }
// int main() {
// 	int choice;
//     do{
//         cin>>choice;
//         switch(choice){
//             case 1: enqueue();
//             break;
//             case 2: dequeue();
//             break;
//             case 3 : display();
//             cout<<'\n';
//             break;
//             case 4: push_front();
//             break;
//             case 5: pop_back();
//             break;
//             default:break;
//         }
//     }while(choice<=5);

//     return 0;


// }

// govind mishra sih winner

/**
qu. 
left =2
right =4
max =6
1. f is added to the right 
2. two letter on right are deleterd 
3. k,l, & m are added to the left 
4. one letter on the left is deleted 
5. r is added to the left 
6. s is added to the right 
7. t is added to the right 
*/

// Priority Queue
#include <iostream>
using namespace std;

class PriorityQueue {
    int arr[100];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    void insert(int value) {
        int i = size - 1;
        while (i >= 0 && arr[i] < value) {
            arr[i + 1] = arr[i];
          
            i--;
        }

        arr[i + 1] = value;
        size++;
    }

    void deleteElement() {
        if (size == 0) {
            cout << "Priority Queue is empty\n";
            return;
        }

        cout << "Deleted element: " << arr[0] << endl;
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;

    pq.insert(50);
    pq.insert(30);
    pq.insert(20);
    pq.insert(5);
    pq.insert(40);





    cout << "Priority Queue: ";
    pq.display();

    pq.deleteElement();

    cout << "After deletion: ";
    pq.display();








     pq.insert(100);
     pq.insert(330);
     pq.insert(220);
     cout<<"After insertion: ";
     pq.display();
  

    return 0;
}





