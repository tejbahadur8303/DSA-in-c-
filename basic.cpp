#include <iostream>

#include <cmath>
using namespace std;


// int main(){

//     int n;
//     cout<<"enter n:"<<n<<endl;
//     cin>>n;
//     if(n%2==0){
//         cout<<"even"<<endl;
//     }else{
//         cout<<"odd"<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     if(n%2==0){
//         cout<<" No. is even"<<endl;

//     }else{
//         cout<<" No. is odd"<<endl;
//     }
//     return 0;
// }


// int main(){
//     int n, j;
//     int i;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i+1; j++)
//         cout<<j<<" ";
//     cout<<endl;
//     }
// return 0;
// }

// 



// int main(){
//     int n;
    
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*i+1; j++){
//             cout<<"*";
//         }
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }

// int main(){
//     int n;
//     char ch='A';
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*i+1; j++){
//             cout<<ch;
//              ch++;
//         }
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }


// int main(){
//     int n;
//     // char ch='A';
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-2*i; j++){
//             cout<<"*";
//             //  ch++;
//         }
        
//         cout<<endl;

//     }
//     return 0;
// }

// int main() 
// {
//     int l, u, ctr = 0;
//     cin >> l >> u;

//     for (int i = l; i <= u; i++) 
//     {
//         string s = to_string(i);   
//         int len = s.length();      
//         int n = i;
//         int sum = 0;
//         while (n > 0) 
//         {
//             int R = n % 10;
//             n = n / 10;
//             sum=sum+(int)pow(R, len);
//         }
//         if (sum == i)
//         {
//             ctr++;
//             cout<<i<<" ";
//         }
//     }
//     if(ctr==0)
//     cout<<-1;
//     return 0;
// }


// bool good(int n) {
//     while (n >= 10) {
//         int a = n % 10;
//         int b = (n / 10) % 10;
//         if (abs(a - b) != 1) return false;
//         n /= 10;
//     }
//     return true;
// }

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 0; i <= n; i++) {
//         if (good(i)) {
//             cout << i << " "<<endl;
//         }
        
//     }

//     return 0;
// }

//   middle=(arr[i]=arr[j])/2;
  
  


// int main(){
//     int a,b;
//     cout<<"enter the first value:";
//     cin>>a;
//     cout<<"enter the second value:";
//     cin>>b;
//     int operation;
//     int c;
//     cout<<"enter the operation:";
//     cin>>operation;
//     c=( a )operation (b);
//     cout<<"c"<<c<<endl;
//     return 0;
// }


int main(){
    int n,k,l;
    cin>>n>>k>>l;
    
    

}