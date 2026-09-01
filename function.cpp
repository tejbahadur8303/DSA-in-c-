#include<iostream>
using namespace std;

// function definition
// int printHello(){
//     cout<<"hello\n";
//     return 90;
// }
// int main(){
//     //function call / invoke
//     cout<< printHello() <<endl;
//     return 0;

// }

// sum of 2 number
// int sum(int a, int b){
//     int s = a+b;
//     return s;
// }
// int main(){
//     cout<< sum(10, 3) <<endl;
//     return 0;
// }


// int minOfTwo(int  a, int  b){       // parmeters
//     if(a < b){
//         return a;
//     }else{
//         return b;
//     }
    
// }
// int main(){
//     cout<< "min = " <<minOfTwo(5,3)<<endl;  //arguments
//     return 0;
// }




// int sumN( int n){
//     int sum = 0;
//     for (int i=1; i<=n; i++){
//         sum +=i;
//     }
//     return sum;

// }
// int main(){
//     cout << sumN(8) << endl;
//     cout << sumN(10) << endl;
//     return 0;
// }


/// factorial

// int fact (int n){
//     int fact =1;
//     for(int i=1; i<=n; i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     cout<<fact(5)<<endl;
//     cout<<fact(4)<<endl;
//     return 0;
// }

// int sumOfDigits(int num){
//    int  digSum = 0;
//     while(num > 0 ){
//          int lastDig = num % 10;
//     num=num/10;
//     digSum+= lastDig;
   
//     }
//     return digSum;
// }
// int main(){
//     cout<<"sum ="<< sumOfDigits(234)<<endl;
//     return 0;
// }


// int factorial(int n){
//     int fact =1;
//     for(int i=1; i<=n; i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
// int fact_n = factorial(n);
// int fact_r = factorial(r);
// int fact_nmr = factorial(n-r);
// return fact_n / (fact_r * fact_ nmr);
// }
   
// int main(){
//     int n=3,   r=3;
//    cout << nCr(n,r) <<endl;
//     return 0;
// }
  

// addition of two number 
// int sum( int a, int b){
//     int sum=a+b;
//     return sum;
// }
// int main(){
//    int s = sum(2,4);
//     cout<< " sum="<<s<<endl;
//     return 0;
// }


// multiplication of two numberbers
// int product( int a, int b){
//     int product=a*b;
//     return product;
// }
// int main(){
//    int p = product(2,4);
//     cout<< " product="<<p<<endl;
//     return 0;
// }

// bool isEven(int n){
//     if(n%2 == 0){
//     return true;
// }else{
//     return false;
// }

// }
// int main(){
//     cout<< isEven(20)<<endl;
//     return 0;
// }


// int fact(int n){
//     int fact =1;
//     int i;
//     for( int i=1; i<=n; i++){
//         fact=fact*i;
//     }
//     return fact ;
// }
// int main(){
//     cout<<fact(5)<<endl;
//     return 0;
// }


// int check(int n){
//     bool isPrime=true;
//     if(n%2==0){
//         cout<<"true";
        

//     }else{
//         cout<<"false";
//     }
//     return n;
// }
// int main(){
//     int n, a;
//     cin>>n;
//    a= check(n);
//    cout<<"n"<<n<<endl;
//    return 0;
// }









// int sumofDigit(int n)
// {
//     int sum=0;
//     int a;
//     for(int i=1; i<=n; i++){
//          a=n%10;
//          sum = sum+a;
//          n=n/10;
//     }
//     return sum;  
// }
// int main(){
//     int p, c;
//     cin>>p;
//     c=sumofDigit(p);
//     cout<<"sum "<<c<<endl;
//     return 0;
// }







// int fact(int n){
//     int fact =1;
//     int i;
//     for( int i=1; i<=n; i++){
//         fact=fact*i;
//     }
//     return fact ;
// }
// int main(){
//     cout<<fact(5)<<endl;
//     return 0;
// }

// int rev(int n)
// {
//     int rev=0;
//     int a,m;
//     m=n;
//     for(int i=0; i<n; i++){
//          a=n%10;
//          rev = rev*10+a;
//          n=n/10;
//     }if(rev==m){
//         cout<<"no is pelindrome "<<endl;
//     }else{
//         cout<<"no is not pelidrom"<<endl;
//     }
//     return rev;
    
    
// }
// int main(){
//     int p, c;
//     cin>>p;
//     c=rev(p);
//     cout<<c<<endl;
//     return 0;
// }


// int sum(int a, int b)
// {
//     return(a+b);
// }
// int calculate(){
//     int a, b, c;
//     cin>>a>>b;
//       c = sum(a,b);
//     return c;
// }

// int main(){
//     int c ;
//      c=calculate();
//     cout<<"the sum of two no. is "<<c;
//     return 0;
// }

// int main(){
//     int a, b, c;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<" The value of the swaping are"<<a<<b<<endl;
//     return 0;
// }
// void swap(int a, int b){
//     int t;
//     t=a;
//     a=b;
//     b=t;
//     cout<<"The swapping value are "<<a<<b<<endl;
    
    
// }


// int main(){
//     int a, b, c;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<" The value of the swaping are"<<a<<b<<endl;
//     return 0;
// }
// void swap(int &a, int &b){
//     int t;
//     t=a;
//     a=b;
//     b=t;
//     cout<<"The swapping value are "<<a<<b<<endl;
    
    
// }




// void print(int n){ 
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
   
// }
// int main(){
//     int n;
//     cin>>n;
//    print(n);
//     return 0;
// }

