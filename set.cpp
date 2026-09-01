// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// set<int>s1;
// set<int>s2;
//  set<int>s3;
//  set<int>s4;
// int n,x,y;
// cin>>n;
// for(int i=0; i<n; i++){
//     cin>>x;
//     s1.insert(x);

// }

// for(int i=0; i<n; i++){
//     cin>>y;
//     s2.insert(y);
// }
// // set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s3,s3.begin()));
// // set_union(s1.begin(), s1.end(), s2.begin(), s2.end(),inserter(s3,s3.begin()));

//  set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),inserter(s3,s3.begin()));
//  set_difference(s2.begin(),s2.end(),s1.begin(),s1.end(),inserter(s4,s4.begin()));


//  for(int v:s3){
//      cout<<"p ="<<v<<endl;
//  }
//  for(int v: s4){
//      cout<<"q ="<<v<<endl;
//  }
//  int p=s3.size();
//  int q=s4.size();
//  cout<<"P*Q = "<<p*q<<" ";
// }



// given two string s1 and s2 having length l and m . print the count of character from s1 which are also present in s2 ?
// given an array of postivie integer and another number k. determine wether or not ther exist two element in array whose sum is exactly k?
// given an unsorted integer array nums  retun the smallest positive that is not present in nums ?



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	set<int>s1;
// 	set<int>s2;
// 	set<int>s3;
// 	int n,x,y;
// 	cin>>n;
// 	for(int i=0; i<n; i++){
// 	    cin>>x;
// 	    s1.insert(x);
// 	}
// 	for(int i=0; i<n; i++){
// 	    cin>>y;
// 	    s2.insert(y);
// 	}
	
	
// 	for(int v:s1){
	  
// 	    if(s2.find(v)!= s2.end())
// 	    {
// 	        s3.insert(v);
// 	    }
	    
// 	    for(auto w:s3){
// 	    cout<<w;
	    
// 	}
	
// 	}



// set<char>s1;
// set<char>s2;
// set<char>s3;
// char a,b;
// int n;
// cin>>n;
// for(int i=0; i<n; i++){
//     cin>>a;
//     s1.insert(a);
// }
// for(int i=0; i<n; i++){
//     cin>>b;
//     s2.insert(b);
// }


// set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),inserter(s3,s3.begin()));

// for(auto v:s3){
//     cout<<v<<" ";
//     cout<<"count = "<<s3.size()<<endl;
    
// }




// set<int>s1={1,2,3,4,5};
// set<int>s2={3,4,5,6,7};
// set<int>s3;

// set_intersection(s2.begin(),s2.end(),s1.begin(),s1.end(),inserter(s3,s3.end()));



// for(auto v: s3){
//     cout<<v;
//     // cout<<s3.size()
// ;}



//}
	


// write a program to print the given array in decreasing order
/*given an array with n interger print the product of count of unique and non unique elements 11 
10 2 3 4 2 5 6 4 2 3 6
 for the above array count all the element whose frequencies is 2?
for the above array print all the unique elements?
 for the above array pritn all the element whose comes either one or  two. times  
 
 1.  a person wants to name his new bonr doughter and son he has got hold of list of name acc to his beleif system . he want to name hhis doughter by the name that appear least in his list oof name and he want to name his son by the name that apear most in the list .
 in case of tie he will peak the laxicographically smaller name.
 help that person find suitable name for his doughter and son 

#include <bits/stdc++.h>

using namespace std;

int main() {

    /*a person wants to name his new bonr doughter and son he has got hold of list of name acc to his beleif system . he want to name his doughter by the name that appear least in his list oof name and he want to name his son by the name that apear most in the list .
     in case of tie he will peak the laxicographically smaller name.
     help that person find suitable name for his doughter and son ?
      size;7
      JACKAL tiger jackal fox lion eagle lion
      answer ->1. eagle
         2-> jackal
         
         */
//     string a[7] = {
//         "jackal",
//         "tiger",
//         "jackal",
//         "fox",
//         "lion",
//         "eagle",
//         "lion"
//     };
//     map < string, int > m;

//     for (auto i: a) {
//         m[i] = m[i] + 1;
//     }
//     int max =0;
    
//     for (auto x: m) {
//         if(max<x.second) max=x.second;
       
//     }




// }

//  given a list of interger 
 
 
//  */

//  1.



//wap to input  an array of string print that array in decending order?

// #include <bits/stdc++.h>

// using namespace std;
// bool fun(pair<string,int>p1,pair<string,int>p2){
// return (p1.second > p2.second);
// }

// int main() {
    
//      map<string,int>m={{"A",2},{"B",1},{"D",3},{"C",2}};
//     vector<pair<string,int>>v(m.begin(),m.end());
//     sort(v.begin(),v.end(),fun);
    
//     for(auto i:v){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
    
    
    
//     //  string a[5] = {
//     //     "ab",
//     //     "abc",
//     //     "abcd",
//     //     "abcde",
//     //     "abcdef",
        
//     // };
//     // map < string, int, greater<string>> m;

//     // for (auto i: a) {
//     //     m[i] = m[i] + 1;
//     // }
//     // for (auto x: m) {
//     //   cout<<x.first<<" "<<endl;
       
//     // }
//     // map<string,int>m;
//     // for(auto i :a){
//     //     m[i]=m[i]+1;
//     // // }
//     // for(auto x:m){
//     //     cout<<x.first<<" "<<x.second<<endl;
//     // }
// }






#include <bits/stdc++.h>

using namespace std;
bool fun(<int>p1){
return (p1.second);
}

int main() {
    
     map<int>m={{3},{9},{2},{5},{2},{3}};
    vector<pair<int>>v(m.begin(),m.end());
    sort(v.begin(),v.end(),fun);
    
    for(auto i:v){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    
    
    //  string a[5] = {
    //     "ab",
    //     "abc",
    //     "abcd",
    //     "abcde",
    //     "abcdef",
        
    // };
    // map < string, int, greater<string>> m;

    // for (auto i: a) {
    //     m[i] = m[i] + 1;
    // }
    // for (auto x: m) {
    //   cout<<x.first<<" "<<endl;
       
    // }
    // map<string,int>m;
    // for(auto i :a){
    //     m[i]=m[i]+1;
    // // }
    // for(auto x:m){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
}