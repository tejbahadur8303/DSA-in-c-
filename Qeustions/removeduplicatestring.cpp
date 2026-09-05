#include<iostream>
using namespace std;

 string removeDuplicates(string str){
    int n = str.length();
    string res = "";

     for(int i=0; i<n; i++){
 
       int j;

        for( j= i+1; j<n; j++){
            if(str[i] == str[j])
            break;
        }
        
        if(j == n)
        res = res + str[i];
     }
     return res;

 }

 int main(){
  
  
  string  str = "geeksforgeeks";
     cout<<removeDuplicates(str);
     return 0;
 }