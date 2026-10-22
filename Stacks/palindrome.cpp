#include<iostream>
using namespace std;
int main(){
 string str;
 cout<<"input string :";
 cin>>str;
 stack<char>st;
  for (char ch : str) {
        st.push(ch);
    }

    bool palindrome =true;
    for(char ch:str){
        if(ch !=st.top()){
            palindrome = false;
            break;
        }
        st.pop();
    }
    if(palindrome){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<" NO"<<endl;
    }
 
 return 0;
 }