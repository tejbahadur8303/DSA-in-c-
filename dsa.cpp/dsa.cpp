// Problem A - Royal Clock Tower
// The Royal Clock Tower stores time in 24-hour format. Visitors can only understand 12-hour format
// with AM/PM notation. Given a valid time HH:MM in 24-hour format, convert it into 12-hour format.
// Rules: 00:00 becomes 12:00 AM, 12:00 remains 12:00 PM, and times after 12:00 use PM.
// // #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     int hh, mm;
//     char colon;

//     //input
//     cin>>hh>>colon>>mm;

//     string period;

//     if(hh == 0){
//         hh = 12;
//         period = "AM";
//     }else if(hh<12){
//         period ="AM";
//     }
//     else if(hh == 12){
//         period ="PM";

//     }else{
//         hh -=12;
//         period ="PM";
//     }
//     cout<<setw(2)<<setfill('0')<<hh<<":"
//     <<setw(2)<<setfill('0')<<mm<<" "
//     <<period<<endl;
//     return 0;

// }




// Problem B - Temple of Brackets
// Ancient priests communicate using bracket sequences made of (), [], and {}. A sequence is
// considered sacred if every opening bracket has a matching closing bracket in the correct order.
// Determine whether the given sequence is sacred. Print YES if valid, otherwise print NO.
// #include<iostream>
// #include<stack>
// using namespace std;
// int main (){
//     string s;
//     cin>>s;
//      stack<char> st;

//      for(char ch : s){
//         if(ch == '(' || ch == '['){
//             st.push(ch);
//         }else{
//             if(st.empty()){
//                 cout<<" NO ";
//                 return 0;
//             }
//             if((ch == ')' && st.top() == '(')||
//         (ch==']' && st.top() =='[')){
//             st.pop();
//         }
//     else{
//         cout<<" NO";
//         return 0;
    
//         }
//      }
// }

// if(st.empty())
// cout<<"YES"<<endl;
// else
// cout<<"NO"<<endl;
// return 0;
// }


/*Problem C - Quantum Gates
You are given N quantum gates in a straight line. From gate i, you may jump to any gate j > i. Jump
Cost = |Ai - Aj| × (j - i). You have at most K Quantum Passes. Using a pass makes a jump cost 0.
Find the minimum total energy required to reach gate N from gate 1.
*/
#include<iostream>
#include<vector>
#include<climits>
using name space std;
int main (){
    int N,K;
    cin>>N>>K;
    vector<long long >A(N);
    for (int i=0; i<N; i++){
        cin>>A[i];
    }
    vector<vector<long long>>dp(N, vecot<long long>(K+1,
    LLONG_MAX));

    dp[0][0]=0;
    for(int i=0; i<N; i++){
        for(int k=0; k<=K; k++){
            if(dp[i][k] == LLONG_MAX) continue;

            for(int j=i+1; j<N; j++){
                long long cost = abs(A[i]-A[j])*(j-i);

                dp[j][k]= min(dp[j][k], dp[i][k]+cost);

                if(k<K){
                    dp[j][k+1]=min(dp[j][k+1], dp[i][k]);
                }
            }
        }
    }

    long long ans = LLONG_MAX;
    for(int k=0; k<=K; k++){
        ans =min(ans,dp[N-1][k]);
    }
    cout<<ans<<endl;
    return 0;
}