#include<iostream>
#include<stack>
 #include <algorithm>
using namespace std;
// int main(){
//     //creation of stack 
//     stack<int>s;
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     s.push(6);
//     s.pop();
//     cout<<"printing top element "<<s.top()<<endl;
//     if(s.empty()){
//         cout<<"stack is emmpty"<<endl;
//     }
//     else{
//         cout<<"stack is not empty"<<endl;

//     }
//     cout<<"stack size "<<s.size()<<endl;
//     return 0;
// }


// class Stack {
//     public:
//     int *arr;
//     int top;
//     int size;

//     Stack(int size){
//         this->size=size;
//        arr = new int[size];
//         top = -1;
//     }

//     void push(int element){
//         if(size - top >1){
//             top++;
//             arr[top]=element;

//         }else{
//             cout<<"stack overflow"<<endl;
//         }

//     }

//     void pop(){
//         if(top >=0){
//             top--;
//         }else{
//             cout<<"stack underflow"<<endl;
//         }

//     }



//     int peek(){
//         if(top >=0){
//             return arr[top];
//         }else{
//             cout<<"stack is empty";
//         }
//         return -1;

//     }



//     bool isEmpty(){
//         if(top == -1){
//             return true;
//         }else{
//             return false;
//         }

//     }


// };

// int main(){
//     Stack st(5);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.push(60);
//     cout<<st.peek()<<endl;
//     st.pop();
//     cout<<st.peek()<<endl;
//     st.pop();
//     cout<<st.peek()<<endl;
//     st.pop();
//     cout<<st.peek()<<endl;

//     return 0;

// }

// struct node{
//     int data;
//      node * next;
// };
// struct node *head;
// void push(){
//     int x;
//     cin>>x;
//     node*temp= new node();
//     if(head==NULL){
//         temp->data =x;
//         temp->next=head;
//         head=temp;
//     }else{
//         temp->data=x;
//         temp->next=head;
//         head=temp;
//     }
// }







// int pop()
// {
//     int x;
//     if(head==NULL){
//         cout<<"Underflow";
//     }else{
//          x= head->data;
//         node*temp=head;
//         head=head->next;
//         delete(temp);
    
//     }
//         return x;

// }

// void display()
// {
//     if(head==NULL){
//         cout<<"empty struct"<<endl;
//     }
//     node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;

//     }
// }

// int main(){
//     push();
//     push();
//     push();
//     pop();
//     display();
//     return 0;

// }

 ///delete middle element from stack 

//  void solve(stack<int>&inputStack, int count , int size){
//     //base case 
//     if(count ==size/2){
//         inputStack.pop();
//             return;
//         }
//         int num =inputStack.pop();
//         inputStack.pop();

//         //recursive call
//         solve(inputStack,count+1,size);
//         inputStack.push(num);
//     }
    
 
//  void deleteMiddle(stack<int>&inputStack, int count , int size){
//     int count=0;
//     solve(inputStack, count,N);

//  }


// ///reverse of a string 
// //palindrome
// //binary of decimal
// //decimal to binary
// //infix to prefix
// //evaluation of postfix


// // reverse string using stack
// //  int main (){
// //     string str ="zamania";
// //     stack<char>s;
// //     for(int i=0; i<str.length(); i++){
// //         char ch =str[i];
// //         s.push(ch);
// //     }
// //     string ans ="";
// //     while(!s.empty()){
// //         char ch = s.top();
// //         ans.push_back(ch);
// //         s.pop();
// //     }
// //     cout<<" answer is :"<<ans<<endl;
// //     return 0;
// //  }


//  //palindrome using stack
// //  int main(){
// //  string str;
// //  cout<<"input string :"<<endl;
// //  cin>>str;
// //  stack<char>st;
// //   for (char ch : str) {
// //         st.push(ch);
// //     }

// //     bool palindrome =true;
// //     for(char ch:str){
// //         if(ch !=st.top()){
// //             palindrome = false;
// //             break;
// //         }
// //         st.pop();
// //     }
// //     if(palindrome){
// //         cout<<"Palindrome"<<endl;
// //     }else{
// //         cout<<" NO"<<endl;
// //     }
 
// //  return 0;
// //  }






// //binary of decimal
// // int main() {
// //     int n;
// //     cout << "Enter a decimal number: ";
// //     cin >> n;

// //     stack<int> st;

// //     if (n == 0) {
// //         cout << "Binary: 0";
// //         return 0;
// //     }

// //     // Push remainders into the stack
// //     while (n > 0) {
// //         st.push(n % 2);
// //         n = n / 2;
// //     }

// //     // Pop and print binary number
// //     cout << "Binary: ";
// //     while (!st.empty()) {
// //         cout << st.top();
// //         st.pop();
// //     }

// //     return 0;
// // }



// //decimal to binary
// // int main() {
// //     int n;
// //     cin >> n;

// //     stack<int> st;

// //     if (n == 0) {
// //         cout << 0;
// //         return 0;
// //     }

// //     while (n > 0) {
// //         st.push(n % 2);
// //         n /= 2;
// //     }

// //     while (!st.empty()) {
// //         cout << st.top();
// //         st.pop();
// //     }

// //     return 0;
// // }


// //infix to prefix

// // Check precedence
// // int precedence(char ch) {
// //     if (ch == '^')
// //         return 3;
// //     else if (ch == '*' || ch == '/')
// //         return 2;
// //     else if (ch == '+' || ch == '-')
// //         return 1;
// //     else
// //         return -1;
// // }

// // // Convert Infix to Prefix
// // string infixToPrefix(string s) {
// //     reverse(s.begin(), s.end());

// //     // Swap brackets
// //     for (int i = 0; i < s.length(); i++) {
// //         if (s[i] == '(')
// //             s[i] = ')';
// //         else if (s[i] == ')')
// //             s[i] = '(';
// //     }

// //     stack<char> st;
// //     string result = "";

// //     for (char ch : s) {

// //         // Operand
// //         if (isalnum(ch)) {
// //             result += ch;
// //         }

// //         // Left parenthesis
// //         else if (ch == '(') {
// //             st.push(ch);
// //         }

// //         // Right parenthesis
// //         else if (ch == ')') {
// //             while (!st.empty() && st.top() != '(') {
// //                 result += st.top();
// //                 st.pop();
// //             }
// //             st.pop();
// //         }

// //         // Operator
// //         else {
// //             while (!st.empty() && precedence(st.top()) >= precedence(ch)) {
// //                 result += st.top();
// //                 st.pop();
// //             }
// //             st.push(ch);
// //         }
// //     }

// //     while (!st.empty()) {
// //         result += st.top();
// //         st.pop();
// //     }

// //     reverse(result.begin(), result.end());
// //     return result;
// // }

// // int main() {
// //     string infix;
// //     cout << "Enter infix expression: ";
// //     cin >> infix;

// //     cout << "Prefix Expression: " << infixToPrefix(infix);

// //     return 0;
// // }




// //evaluation of postfix

// int main() {
//     string postfix;
//     cout << "Enter postfix expression: ";
//     cin >> postfix;

//     stack<int> st;

//     for (char ch : postfix) {
//         if (isdigit(ch)) {
//             st.push(ch - '0');   // Convert char to integer
//         }
//         else {
//             int val2 = st.top();
//             st.pop();
//             int val1 = st.top();
//             st.pop();

//             switch (ch) {
//                 case '+':
//                     st.push(val1 + val2);
//                     break;
//                 case '-':
//                     st.push(val1 - val2);
//                     break;
//                 case '*':
//                     st.push(val1 * val2);
//                     break;
//                 case '/':
//                     st.push(val1 / val2);
//                     break;
//                 case '^': {
//                     int ans = 1;
//                     for (int i = 0; i < val2; i++)
//                         ans *= val1;
//                     st.push(ans);
//                     break;
//                 }
//             }
//         }
//     }

//     cout << "Result = " << st.top();

//     return 0;
// }



//infix to postfix
// #include <iostream>
// #include <stack>
// #include <cctype>
// using namespace std;

// stack<char> st;

// int priority(char x) {
//     if (x == '(')
//         return 0;
//     if (x == '+' || x == '-')
//         return 1;
//     if (x == '*' || x == '/')
//         return 2;
//     if (x == '^')
//         return 3;
//     return 0;
// }

// int main() {
//     string exp;
//     cin >> exp;

//     int i = 0;

//     while (exp[i] != '\0') {

//         // If operand
//         if (isalnum(exp[i])) {
//             cout << exp[i];
//         }

//         // If '('
//         else if (exp[i] == '(') {
//             st.push(exp[i]);
//         }

//         // If ')'
//         else if (exp[i] == ')') {
//             while (!st.empty() && st.top() != '(') {
//                 cout << st.top();
//                 st.pop();
//             }
//             if (!st.empty())
//                 st.pop();   // Remove '('
//         }

//         // If operator
//         else {
//             while (!st.empty() &&
//                    priority(st.top()) >= priority(exp[i])) {
//                 cout << st.top();
//                 st.pop();
//             }
//             st.push(exp[i]);
//         }

//         i++;
//     }

//     while (!st.empty()) {
//         cout << st.top();
//         st.pop();
//     }

//     return 0;
// }


// int main(){
//     string exp;
//     cin>>exp;

// //                 case '+':



//                 case '*':



//                  case '/':




                
//               }
//         }
//     }
// // }    int i=0 , res;
//     while(exp[i]!='\0'){
//         if(isdigit(exp[i]))
//         {
//             exp[i]-=0;
//             push([expi]);
//         }
//         else{
//             n1=pop();
//               n1=pop();

//               switch(exp[i])
//               {
//                 case '-':
                
                


// int main(){
//     string exp;
//     cin>>exp;
//     int i=0,res;
//     while(exp[i]!='\0')
//     {
//         if(isdigit(exp[i]))
//         {
//             int num=0;
//             while(exp[i]!=',' && exp[i]!='\0')
//             {
//                 num = num *10 +(exp[i]-'0');
//                 i++;
//             }
//             push(num);
//             if(exp[i]==',')
//             i++;
//         }else{


//             char op =exp[i];
//             int a= pop();
//             int b= pop();
             

//             switch(op)
//             {
//                 case '+':
//                 push( a+b);
//                 break;


//                 case '*':
//                push (a*b);
//                 break;

//                 case '-': if(a>b)
//               push( a-b);
//                 else{
//                   push( b-a);
//                 }
//                 break;


//                 case '/': if(a>b){
//                     push( a/b);
//                 }else
//                 push( b/a);
//                 break;





//            }
//         }
//     }
//     return 0;
// }






// int main()
// {
//     string exp;
//     cin >> exp;

//     int i = 0;

//     while(exp[i] != '\0')
//     {
//         if(isdigit(exp[i]))
//         {
//             int num = 0;

//             while(exp[i] != ',' && exp[i] != '\0')
//             {
//                 num = num * 10 + (exp[i] - '0');
//                 i++;
//             }

//             push(num);

//             if(exp[i] == ',')
//                 i++;
//         }
//         else
//         {
//             char op = exp[i];

//             int a = pop();
//             int b = pop();

//             switch(op)
//             {
//                 case '+':
//                     push(b + a);
//                     break;

//                 case '-':
//                     push(b - a);
//                     break;

//                 case '*':
//                     push(b * a);
//                     break;

//                 case '/':
//                     push(b / a);
//                     break;
//             }

//             i++;
//         }
//     }

//     cout << pop() << endl;
//     return 0;
// }





// class node{
//     int data;
//      node * next;
// };
// class node *head;
// void push(){
//     int x;
//     cin>>x;
//     node*temp= new node();
//     if(head==NULL){
//         temp->data =x;
//         temp->next=head;
//         head=temp;
//     }else{
//         temp->data=x;
//         temp->next=head;
//         head=temp;
//     }
// }







// int pop()
// {
//     int x;
//     if(head==NULL){
//         cout<<"Underflow";
//     }else{
//          x= head->data;
//         node*temp=head;
//         head=head->next;
//         delete(temp);
    
//     }
//         return x;

// }

// void display()
// {
//     if(head==NULL){
//         cout<<"empty struct"<<endl;
//     }
//     node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;

//     }
// }

// int main(){
//     push();
//     push();
//     push();
//     pop();
//     display();
//     return 0;

// }






