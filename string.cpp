#include<iostream>
#include<cstring>
using namespace std;
// int main(){
//     string str="I am the best";
//     cout<<str.length()<<endl;
//     return 0;
// }
// int main(){
//     string str = "tejbahadur";
//     int sum=0;
//     int a;
//     for( char ch : str) {
//         a=int(ch);
//         int sum=sum+a;
//     }
//     if(
//         sum%2==0)
//         cout<<"unique";
//         else
//         cout<<"simple";
//     return 0;
// }
// i
// int main(){
//     int sum=0;
//     string str="123";
//     for(char ch:str){
//         if(isdigit(ch)){
//             sum+=ch-'0';
//         }
        
//     }
//     cout<<sum<<endl;
//     return 0;

// }


// int main(){
//     int  l;
//     string s,str, st;
//     cin>>l>>s;
//     for(int i=0; i<l; i++){
//         if(s[i]>=65 && s[i]<=90)
//         str = str + char(s[i]+32)
//     else if
//        ( s[i]>=97 && s[i]<=122 || s[i]>0 && s[i]<='9') 
//        str = str +s[i];{

       
//        }else

//            st =st +s[i];
//        }
//     cout<<str+st;
//     return 0;

//     }


// int main(){
//     int n ,m,k;
//     cin>>k>>n>>m;
//     string s;
//     cin.ignore();
//     grtline();
//     grtline(cin,s);
//     int count = 0;
//     for (int i=0; i<k; i++){
//         if(int (s[i])>=n && int(s[i])<=m){
//             count++;
//         }
//         cout<<coutn<<endl;
//         return 0;
//     }
// }
        
    

// int main(){
//     string str;
//     // cin>>str;
//     getline(cin,str);
//     cout<<str<<endl;
    
    
//     return 0;
// }

// int main(){

// string str;
// getline(cin,str);
// cout<<str<<endl;
// string str = "survive ";
// reverse(str.begin(),str.end());

// cout<<str.substr(1,4)<<endl;
// string str ;
// getline(cin, str);
// cout<<str.substr(3,4)<<endl;
// return 0;










// string countSort( string str){
//     vector <int> freq(26,0);
//     for(int i=0; i<str.length(); i++){
//         int index = str[i]-'a';
//         freq[index]++;
//     }
//      int j=0;
//     for(int i=0; i<26; i++)
//     while(freq[i]--){
// str[j++]= i +'a';
// }
// return str;
// }
// int main(){
//     string str ;
//     cin>>str;
    
//     cout<<countSort(str)<<endl;
//     return 0;
// }


//Anagram or not
// bool isAnagram(string s1, string s2){
//     vector <int> freq(26,0);
//     if(s1.length()!=s2.length()){
//         return false;
//     }
//     for(int i=0; i<s1.length(); i++){
//         freq[s1[i]-'a']++;
//         freq[s2[i]-'a']--;
//     }
//     for(int i=0; i<26; i++){
//         if(freq[i]!=0){
//             return false;
//         }
//     }
//     return true;
// }


// int main(){
//     string s1 ,s2;
//     cin>>s1>>s2;
//     if(isAnagram(s1,s2)){
//         cout<<"string is anagram"<<endl;
//     }else{
//         cout<<"string is not anagram"<<endl;
//     }
//     return 0;
// }











// int f(int n ){
//     if(n==1) return 1;
//     int ans=n*f(n-1);
//     return ans;
// }
// int main(){
//    int result = f(5);
//    cout<<result<<endl;
//     return 0;
// }



//fibbonaci series
//  int fib(int n){
//     if(n==0 or n==1) return n;
//     int ans = fib(n-1)+fib(n-2);
// return ans;
// }
// int main(){
//     int result = fib(3);
//     cout<<result<<endl;
//     return 0;
// }

// int digiSum(int n){
//     if(n>=0 and n<=9)  return n;
//     return digiSum(n/10) + (n%10);
// }
// int main(){
//     int result = digiSum(122343);
//     cout<<result<<endl;
//     return 0;
// }

// int main(){
//     char arr[10];
//    cin>>arr;
//    arr[4]= '\0';   null character
//    cout<<arr;
   
//     return 0;


// string s1= "tejash", s2 = "tejbahadur";
// getline(cin,s);
// cout<<s<<endl;;
// cout<<s.size();
// string s3 = s1.append(s2);
// s3.push_back('p');
// s3.pop_back();
// cout<<s3;

// string s= "tej";
// int start =0;
// int end =s.size ()- 1;
// while(start<end){


// swap(s[start],s[end]);
// start++, end--;
// }
// cout<<s<<endl;
// cout<<s.size()<<endl;
// string s2 = "omshairam";
// start =0, end = s2.size()-1;
// while(start<end){
//     if(s2[start]!= s2[end]){
//         cout<<" not a penlinrome"<<endl;

//     }
//     start++,end--;

//     cout<<" pelindrome"<<endl;
// }


// return 0;
// }

// int main(){
//      vector<int>lower(26,0);
//      vector<int>upper(26,0);
//      for(int i=0; i<s.size(); i++)
//      {
//         if(s[i]>='a')
//         lower[s[i]-'a']++;
//     else
//     upper[s[i]-'A']++;

//      }
//      int count = 0;
//      bool odd = 0;

//      for(int =0;; i<26; i++)
//      {
//         if(lower[i]%2==0)
//         count+=lower[i];
//     else
//     {
//         count+=upper[i]-1;
//         odd=1;
//     }
//      if(upper[i]%2==0)
//         count+=lower[i];
//     else
//     {
//         count+=upper[i]-1;
//         odd=1;
//     }
//      }
//      return count +odd;
// }



// int main(){
//     int index = 0;
//      string ans;
//     while(index<address.size())
//     {
//         if(address[index]=='.')
//         ans = ans +"[.]";
//     else
//     ans = ans +address[index];
//      index++;
//     }
//     return ans;
// }



// sort vowel in string 
// vector<int>lower(26,0)
// vector<int>upper(26,0)
// for(int i=0; i<s.size(); i++)
// {
//  if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')  
//  lower[s[i]-'a']++;
// s[i]='#';
// else if(s[i]=='A' || s[i]='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')  
//  upper[s[i]-'A']++;
// s[i]='#';
// }
// }
// string vowel;
// for(int i<0; i<26; i++)
// {
//     char c = 'A'+i;
//     while(upper[i])
//     {
//         vowel+=c;
//         upper[i]--;
//     }

// }
// // for lower
// for(int i<0; i<26; i++)
// {
//     char c = 'A'+i;
//     while(upper[i])
//     {
//         vowel+=c;
//         upper[i]--;
//     }

// }


///Addition of strings

// class solution {
//     public:

//     string add(string num1, string num2)
//     {
//         string ans;
//        int  index1= num1.size()-1, index2=num2.size()-1;
//        int sum, carry = 0;

//        // index2 >0
//        while(index2>=0)
//        {
//         sum = (num1[index1]-'0')+ (num2[index2]-'0')+carry;
//         carry = sum/10;
//         char c = '0' + sum%10;
//         ans+=c;
//         index2--, index1--;

//        }

//        // index1>0
//        while(index1>=0)
//        {
//         sum = (num1[index1]-'0')+carry;
//         carry = sum/10;
//         char c ='0'+sum%10;
//         ans+=c;
//         index1--;
//        }
//        if(carry)
//        ans+='1';

//        reverse(ans.begin(),ans.end());
//        return ans;
//     }


//     string addStrings(string num1, string num2){
//         if(num1.size()<num2.size())
//         return add(num2,num1);
//         else
//         return add(num1, num2);
//     }
// }

// int main(){
//     char s1[20]="hellotejbahadurword";
//     string str ="har har mahadev";
    // char s2[20]="hello";
    // cout<<"length of this string :"<<strlen(s1)<<endl;
    // cout<<str.size();
//     cout<<"length of this string :"<<strlen(s2)<<endl;
//     strcpy(s1,s2);
//     cout<<"after copy , s2:"<<s1<<endl;
//     strcat(s1,"tejash");
//     cout<<"after concatenaion , s1:"<<s1<<endl;
//     if(strcmp(s1,s2)==0)
//     cout<<"strings are equal";
// else
// cout<<"strings not equal";

// return 0;
// }

// int main(){
//     string s1="hello";
//      string s2= "tejbahadur";
//         string result = s1+s2;
//      cout<<"concatenation  strings :"<<result<<endl;
//      return 0;
// }

int main(){
    string s;
    char oldchar,  newchar;
    getline(cin,s);
    cin>>oldchar;
    cin>>newchar;
    for(int i=0; s[i] !='\0'; i++){
        if(s[i] == oldchar)
        s[i] == newchar;

    }
    cout<<s;
return 0;
}