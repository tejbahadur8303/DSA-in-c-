// #include <iostream>
// #include<vector>
// using namespace std;
// int main(){
    

    
    
//     int target ;
//     cin>>target;
//     int s=0;
   
//     int e=target;
//     int ans=-1;
//     int mid= s+(e-s)/2;
   
//     while(s<=e){
//         if(mid*mid == target){
//             return mid ;  
//             break;
//         }
//         else if(mid*mid < target){
//             ans=mid;
//             s= mid + 1;
//         }else{

            

//             e= mid - 1;

//         }
//         mid = s+(e-s)/2;
//     }
//     cout<<ans<<" "<<"sqrt"<<endl;
    
//     return 0;
// }



// Function for integer part using binary search
// int sqrtInteger(int n) {
//     int s = 0, e = n;
//     int ans = -1;

//     while (s <= e) {
//         int mid = s + (e - s) / 2;
//         long long square = 1LL * mid * mid;

//         if (square == n) {
//             return mid;
//         }
//         else if (square < n) {
//             ans = mid;
//             s = mid + 1;
//         }
//         else {
//             e = mid - 1;
//         }
//     }
//     return ans;
// }






// finding Peak index in mountain array

// int main(){
//     int n;
//     cin>>n;
//     int A[100];
//     for(int i=0; i<n; i++){
//         cin>>A[i];
//     }
//     int s=0; 
//     int e= n-1;
//     int mid = s+ (e-s)/2;
//     while(s<=e){
//         if(A[mid]<A[mid+1]){
//             s=mid +1;
//         }else{
//             e=mid;
//         }
//         mid = s+(e-s)/2;

//     }
   
    
//     return s;
// }




//////E X P O N E N E N T I A L      S E A R C H


// int bs(int A[], int s , int e, int x){
// while(s<=e){
//     int mid= (s+e)/2;
//     if(A[mid]==x){
//         return mid;
//     }else if(x>A[mid]){
//          s=mid+1;
//     }else{
//         e=mid- 1;
//     }
// }
// return -1;
// }


// int expSearch(int A[],int n, int x){
//     if(A[0]==x) return 0;

//     int i=1;
//     while(i<n && A[i]<=x){
//         i=i*2;
//     }
//     return bs(A, i/2, min(i,n-1),x);

// }



// int main(){
//     int A[]= {3, 4,5,6,11,13,14,15,56,70};
//     int n= sizeof(A) / sizeof(int);
//     int x=56;
//     int ans = expSearch(A,n,x);
//     cout<<ans<<endl;
//     return 0;
// }

// // Function for precision
// double sqrtPrecision(int n, int precision, int tempSol) {
//     double factor = 1;
//     double ans = tempSol;

//     for (int i = 0; i < precision; i++) {
//         factor = factor / 10;

//         for (double j = ans; j * j < n; j = j + factor) {
//             ans = j;
//         }
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;

//     int tempSol = sqrtInteger(n);

//     double result = sqrtPrecision(n, 3, tempSol);

//     cout << "Square root upto 3 decimal: " << result << endl;

//     return 0;
// }





/// binary search in a nearly sorted array

// int binarySearch(vector<int> arr , int target){
//     int s=0;
//     int e=arr.size()-1;


//     int mid = s+(e-s)/2;

//     while(s<=e){
//         if(arr[mid]==target)
//             return mid;
        
//         if(mid-1>0 && arr[mid-1]==target)
//             return mid-1;
        
//         if(mid+1<arr.size() && arr[mid+1]==target)
//             return mid+1;
        
//         if(target>arr[mid]){
//             s = mid+2;
//         }else{
//             e = mid - 2;
//         }
//         mid=s+(e-s)/2;
//     }
//     return -1;


// }

// int main(){
//     vector<int> arr{10,3,40,20,50,80,70};
//     int target ;
//     cout<<"Enter the  element that you want to search :";
//     cin>>target;
//     int ans = binarySearch(arr,target);
//     cout<<"index of "<<target<<" is "<< ans <<endl;
//     return 0;

    

// }




/// divide two number using the binary search 
// int solve(int dividend , int divisor){
//     int s=0;
//     int ans;
//     int e= dividend;
//     int mid = s+(e-s)/2;
//     while(s<=e){
//         if(abs(mid*divisor) == abs(dividend)){
//             return mid;
//         }
//         if(abs(mid*divisor)>abs(dividend)){
//             e=mid-1;
//         }else{
//             ans=mid;
//             s=mid+1;
            
//         }
//         mid=s+(e-s)/2;
//     }
//     if((divisor<0 && dividend <0 || (dividend>0 && divisor>0)))
//     return ans;
//     else{
//         return -ans;
//     }
// }


// int main(){
//     int dividend ;
//     cout<<"enter the dividend :";
//     cin>>dividend;
//     int divisor ;
//     cout<<"enter the divisor :";
//     cin>>divisor;

//     int ans = solve(dividend, divisor);
//     cout<<" Ans is "<<ans<<endl;
//     return 0;
// }


// find odd occuring element in a given array

 

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node * next;
//     Node(int value){
//         data = value;
//         next = nullptr;
//     }
// };

// void display(Node * head){
//     Node * temp;
//     temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data;
//         temp =temp->next;
//     }
//     cout<<endl;
// }

// Node * insertatbeg(Node *head, int value){
//     Node *n = new Node(value);
//     if(head == nullptr){
//         n->next = nullptr;
//         head = n;
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

#include<iostream>
using namespace std;
class Node{
    public;
    int data;
    Node*next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};
 void display(Node * head){
    Node *temp;
    temp = head;
    while(temp!=nullptr){
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<endl;
 }


