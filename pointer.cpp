#include<iostream>
using namespace std;
// void util(int* p){
//     p=p +1;
// }
// int main(){
//     int a=5;
//     int* p = &a;
//     cout<<"before"<<endl;
//      cout<< a << endl;
//      cout<< p<< endl;
//      cout<< *p<< endl;
     
//     util(p);
//       cout<<"after"<<endl;
//       cout<< a<< endl;
//       cout<< p <<endl;
//       cout<< *p <<endl;
//       return 0;


// }


// void solve(int** ptr){

//     // ptr =ptr +1;
//     **ptr = **ptr +1;
// }  

// int main(){
//     int x = 12;
//     int* p = &x;
//     int** q = &p;
//     solve(q);

//     cout<< x << endl;
//     return 0;
// }







// int main(){
//     int a =5;
//     int& b=a;
//     cout<<a<<endl;
//     cout<<b<<endl;
 
//     a++;
//     cout<<a<<endl;
//     cout<< b<<endl;
//     return 0;
// }












// void solve(int* val){
//     *val = *val + 1;
// }
// int main(){
//     int a=12;
//     int *p =&a;
//     solve(p);
//     cout<< a << endl;
// }







// void solve(int*& p){
//     p= p +1;

// }
// int main(){
//     int a= 5;
//     int *p =&a;
//      cout << "before "<<p<<endl;
//      solve(p);
//      cout<<"after "<<p<<endl;
//      return 0;
// }



int* solve()
{
    int a=25;
    int *ans = &a;
    return ans;
}

