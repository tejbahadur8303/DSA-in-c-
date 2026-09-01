#include<iostream>
using namespace std;
// int main(){
//     int n;
//    cin>>n;
//    vector<int> v(n), b(n);
//    for(int i=0; i<0; i++) 
//    cin>>v[i];
//   for(int i=0; i<n; i++)
//   cin>>b[i];
// vector<int>ans;
// int i=0, j=0;
// while(i<n &&j<n){
//     if(v[i]<=b[j]){
//         ans.push_basic(v[i]);
//         i++;                                                          
        
        
//     }else ans.push_back(b[j]);
//     j++;
//     }
//     while(j<n){
//         ans.push_back(b[j]);
//         j++;
//     }
//     while(i<n){
//         ans.push_back(v[i]);
//     }
//     int sum = (ans[n-1] + ans[n]);
//     cout<<(float)sum/2;
//     return 0;
// }

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++)
    cin>>arr[i];
for(int i=0;i<n; i++){
    int rank =1;
    for(int j=0; j<n; j++){
        if(arr[j]>arr[i]){
            rank++;
        }
    }
    cout<<rank<<" ";
}
cout<<endl;
  
return 0;

}