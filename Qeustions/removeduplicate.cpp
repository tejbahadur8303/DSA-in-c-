#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    int arr[n];
    for( i=0; i<n; i++){
        cin>>arr[i];
    }
    for( i=0; i<n; i++){
        if(arr[i]==arr[i-1]){
            

        }else
            cout<<"Not any same element in this array"<<endl;
        
    }
    cout<<arr[i]<<endl;
    return 0;
}