#include <iostream>
#include<limits.h>
using namespace std;

//***factorial

// int factorial(int n) {
//     if (n == 0 || n == 1)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "Factorial = " << factorial(n)<<endl;
//     return 0;
// }



// *****fibbonacci series
// int fibonacci(int n) {
//     if (n == 0)
//         return 0;
//     else if (n == 1)
//         return 1;
//     else
//         return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int n;
//     cout << "Enter number of terms: ";
//     cin >> n;

//     cout << "Fibonacci Series: ";
//     for (int i = 0; i < n; i++) {
//         cout << fibonacci(i) << " ";
//     }
//     return 0;
// }




// fibonacci 
// int DAT[1001];
// int fibo(int n){
//     if(n == 1 || n== 2) return DAT[n]=n-1;
//     else{
//     if(DAT[n]==0)
//      DAT[n]=fibo(n-1) +fibo(n-2);
// }
// return DAT[n];
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){

//         cout<<fibo(i)<<" ";
//     }
//     return 0;
// }


// int power(int a, int b) {
//     if (b == 0)
//         return 1;
//     else
//         return a * power(a, b - 1);
// }

// int main() {
//     int a, b;
//     cout << "Enter base and exponent: ";
//     cin >> a >> b;

//     cout << "Result = " << power(a, b);
//     return 0;
// }



//  int fib(int n ){
//     //base case
//     if(n ==1){
//         return n;
//     }
//         if(n ==1){
//             return 0;
//         }
//         if(n ==2){
//             return 1;
//         }
    
//     //RR
//     int ans =  fib(n-1)+ fib(n-2);
//     return ans;
    
//  }

//  int main(){
//     int n;
//     cout<<" Enter the term you want to see :";
//     cin>>n;
//     for(int i=1; i<=5; i++){

//         cout<<"Fibonacci " <<fib(i)<<endl;
//     }
//     return 0;
//  }

// int climbStairs(int n){
//     //base case - stopping condition 
//     if(n == 0 || n == 1)
//     return 1;
//    int ans = climbStairs(n-1) + climbStairs(n-2);
//    return ans ;


     
// }

// int main (){

//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;

//     int ans = climbStairs(n);
//     cout<<"Answer is :"<<ans<<endl;
//     return 0;

// }
































// void findMax(int arr[], int n, int i, int& maxi){
//     if(i>=n){
//         //array agr khtm hogya , pooora ttranverse hogya t
//         //to wapas ajao
//         return ;
//     }


//     // 1 case solve krna h 
//     // current element ko chekc kro for max 
//     if(arr[i] > maxi){
//         maxi = arr[i];
//     }
//     findMax(arr ,n , i+1, maxi);
// }

// void findMin(int arr[], int n, int i, int& mini){
//     //base case
//     if(i >= n){
//         return ;
//     }
//     // 1 caase solve krna pdega 
//     mini = min(mini, arr[i]);

//     // baki recursion sambhal lega 
//     findMin(arr, n, i+1, mini);
// }

// int main(){
//     int arr[] ={ 10,20,30,40,50,60,80,90};
//     int n=8;
//     int maxi = INT_MAX;
//     int mini = INT_MAX;
//     int i=0;
//     findMax(arr,n,i,maxi);
//     findMin(arr, n, i, mini);

//     cout<<" maximum number is : "<<maxi <<endl;
//     cout<<" minimum number is :"<< mini <<endl;


//     return 0;
// }









// bool checkKey(string str, int i,int n, char key){
//     //base case
//     if( i >= n){
//         //key noot founf 
//         return false;

//     }
//     if(str[i] == key)
//          return true;
// // baki recursioin dekh lega 
//      return  checkKey(str, i+1, n , key);
// }



// int main(){
//     string str ="tejbahadur";
//     int n= str.length();
//      char key = 'j';
//      int i=0;
//      bool ans = checkKey(str,i, n, key);
//      cout<<" answer is :"<<ans <<endl;
//      return 0;
//}











// void printDigits(int n){
//     if(n == 0){
//         return ;
//     }
//       /// baki case recursion solve kr dega
//      int newValue = n /10;

//      printDigits(newValue);


//      //1 case 
//     int digit =n%10;
//     cout<< digit << " ";

    
   

// }

// //print the digit 
// int main(){
//     int n;
//     cin>>n;

//     if(n == 0){
//         cout<< 0 << endl;
//     }
//     printDigits(n);
//     return 0;





// }





// void towerOfHanoi(int n, char A, char B, char C) {
//     // Base case
//     if (n == 1) {
//         cout << "Move disk 1 from " << A << " -> " << C << endl;
//         return;
//     }

//     // Move n-1 disks from A to B
//     towerOfHanoi(n - 1, A, C, B);

//     // Move largest disk from A to C
//     cout << "Move disk " << n << " from " << A << " -> " << C << endl;

//     // Move n-1 disks from B to C
//     towerOfHanoi(n - 1, B, A, C);
// }

// int main() {
//     int n;

//     cout << "Enter number of disks: ";
//     cin >> n;

//     towerOfHanoi(n, 'A', 'B', 'C');

//     return 0;
// }



/// TRAVERSE OF AN ARRAY 


// void traverse(int arr[], int n, int i) {
//     // Base case
//     if (i == n)
//         return;

//     cout << arr[i] << " ";

//     // Recursive call
//     traverse(arr, n, i + 1);
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = 5;

//     traverse(arr, n, 0);

//     return 0;
// }








///sorted array

// bool checkSorted(vector<int> &arr, int& n, int i){
//     if(i == n-1){
//         return true;
//     }
//     if(arr[i+1]<=arr[i])
//     return false;
//     return checkSorted(arr,n,i+1);
// }
// int main(){

//     vector<int> v{10};
//     int n = v.size();
//     int i=0;

//     bool isSorted =checkSorted(v,n,i);
//     if(isSorted){
//         cout<<"sorted";
//     }else{
//         cout<<"Not sorted";
//     }

//     return 0;
// }












////BINARY SEARCH


// int binarySearch(vector<int> v, int s, int e, int key){
//     //base case
//     if(s > e){
//         return -1;

//     }

        
//         //case 2
//     int mid =(s+e)/2;
//     if(v[mid] == key){
//             return mid;

//     }



//      if(v[mid] < key){
//             int  ans = binarySearch(v,mid+1,e,key);
//             return ans;

//         }else{
//             int ans = binarySearch(v,s,mid-1,key);
//             return ans;
//         }


//         }
      
// int main (){
//     vector<int> v {10,20,40,50,60,70,80};
//     int target = 80;
//      int n= v.size();
//      int s=0;
//      int e= n-1;
//      int ans =binarySearch(v,s,e,target);
//      cout<<"Answer is : "<<ans<<endl;
//      return 0;
// }




////SUBSEQUENCE  OF STRING 
// void printSubsequence(string str, string output, int i ){
//     //base case
//     if(i >= str.length()){
//         cout<< output << endl ;
//         return ;
//     }
//     //exclude 
//     printSubsequence(str,output ,i+1);


//     // include
//     output.push_back(str[i]);
//     printSubsequence(str,output ,i+1);
    
// }

// int main(){
//     string str ="abc";
//     string output ="";
//     int i=0; 
//     printSubsequence(str, output ,i);
//     return 0 ;
// }




// merging of two sorted array
// int main(){
//     int arr[]={1,2,3,4};
//     int brr[]={3,4,5,6,7};
//     int crr[9];
//     int i=0, j=0, k=0;

//     while(i<4 && j< 5){
//         if(arr[i]<brr[j]){
//             crr[k]=arr[i];
//             i++;
//             k++;
//         }else{
//             crr[k] = brr[j];
//             j++;
//             k++;
//         }

//     }
//     while(i<4){
//         crr[k] =arr[i];
//         i++;
//         k++;
//     }
//     while(j<5){
//         crr[k]=brr[j];
//         j++;
//         k++;
//     }
//     for(int i=0; i<9; i++){
//         cout<<crr[i]<<" ";
//     }
//     return 0;
// }


///MERGING OF ARRAY
int mergeSort(int* arr, int s, int e){
    //base case
    if(s <= e)
        return;

        int mid = (s+e)/2;
        int len1 =mid -s +1;
        int len2 = e-mid;
        
        int* left = new int[len1];
         int* right = new int[len2];

         int k=s;
         for(int i=0; i<len1; i++){
            left[i]= arr[k];
            k++;
         }

         k =mid +1;
         for(int i=0; i<len2; i++){
            right[i]= arr[k];
            k++;
         }

         // merge logic
            int leftIndex =0;
            int rightIndex =0;
            int mainArrayIndex =0;

  //left sorted kr do
        mergeSort(arr,s,mid);

         ///right sort krdo recursion 
        mergeSort(arr,mid+1, e);

        //merge two sorted array

        merge(arr,s,e);
    
}
int main(){
    int arr[]={4,5,13,2,12};
    int n =5;
    int s =0;
    int e= n-1;

}


// //merging of two sorted array
// //union of two array
// //intersection of two array 
// // set difference (A-B & B-A)
// //reverse
// //pallindrome



//REVERSE  OF STRING 
// void reverse(string& s, int start, int end){
//     //base case
//     if(start >= end){
//         return ;

//     }
//     //first case
//     swap(s[start],s[end]);

//     //other case recursion sambhal lega 
//     reverse(s, start+1, end-1);
// }
// int main(){
//     string  s;
//     cin>>s;
//     reverse(s,0, s.size()-1);
//     cout<<s<<endl;
//     return 0 ;
// }

//REVERSE OF ARRAY
// int main(){
//   vector<int> v={2,3,4,5};



//    int s=0;
//    int e= v.size()-1;

//    while(s<e){
//        swap(v[s],v[e]);
//        s++;
//        e--;
//    }
//    {
//     for(int i=0; i<=v.size()-1; i++){
//         cout<<v[i]<<endl;
//     }
//    }
//    return 0 ; 
// }

///PALLINDROME

// int main() {
//     vector<int> v = {1, 2, 3, 2, 1};

//     int s = 0;
//     int e = v.size() - 1;

//     bool palindrome = true;

//     while (s < e) {
//         if (v[s] != v[e]) {
//             palindrome = false;
//             break;
//         }

//         s++;
//         e--;
//     }

//     if (palindrome) {
//         cout << "Palindrome";
//     } else {
//         cout << "Not Palindrome";
//     }

//     return 0;
// }



// UNIION 


// int main() {
//     vector<int> a = {1, 2, 3, 4};
//     vector<int> b = {3, 4, 5, 6};

//     vector<int> s;

//     for(int i = 0; i < a.size(); i++) {
//         s.push_back(a[i]);
//     }

//     for(int i = 0; i < b.size(); i++) {
//         s.push_back(b[i]);
//     }

//     for(auto x : s) {
//         cout << x << " ";
//     }

//     return 0;
//}




//INTERSECCTION 
// int main() {
//     vector<int> a = {1, 2, 3, 4};
//     vector<int> b = {3, 4, 5, 6};

//     vector<int> ans;

//     for(int x : a) {
//         if(find(b.begin(), b.end(), x) != b.end()) {
//             ans.push_back(x);
//         }
//     }

//     for(int x : ans) {
//         cout << x << " ";
//     }

//     return 0;
// }










//DIFFERENCE
// int main() {
//     vector<int> A = {1, 2, 3, 4};
//     vector<int> B = {3, 4, 5, 6};

//     // A - B
//     cout << "A - B: ";
//     for(int x : A) {
//         if(find(B.begin(), B.end(), x) == B.end()) {
//             cout << x << " ";
//         }
//     }

//     cout << endl;

//     // B - A
//     cout << "B - A: ";
//     for(int x : B) {
//         if(find(A.begin(), A.end(), x) == A.end()) {
//             cout << x << " ";
//         }
//     }

//     return 0;
// }


// mergeSort(int a[], int l,int r){
//     int mid = (l+r)/2;
//     if(l<r){
//         mid =(l+r)/2;

//         mergeSort(a[],l,mid);
//          mergeSort(a[],mid+1,r);
//           mergeSort(a[],l,r,mid);
//     }
// }
// int main(){
//     vector<int >v={3,1,4,2,7,6,5};
//     for(int i=0)
//     cout<<mergeSort
// }





//give an array of size of nwith distinct elements
//trget = 5
//you have to tell the minimum numbrr of element required to reach target

// int solve(vector<int>  & arr, int target){
//     //baw case
//     if(target == 0){
//         return 0;
//     }
//     if(target < 0){
//         return INT_MAX;
//     }
//     //let solve the 1 case 
//     int mini = INT_MAX;
//     for(int i=0; i<arr.size(); i++){
//         int ans = solve(arr, target - arr[i]);
//         int mini =min(mini, ans);
//     }
//     return mini;

// }
// int main(){
//     vector<int>arr{1,2};
//     int target = 5 ;
//     int ans = solve(arr, target);
//     cout<<" answer is : "<< ans <<endl;
//     return 0;
// }




//TREE RECURSION 
// int solve (int n , int x, int y, int z){
//     if(n == 0){
//         return 0;

//     }
  
//     if(n < 0){
//         return INT_MIN;

//     }
//     int ans1=solve(n-x,x,y,z)+1;
//     int ans2 =solve(n-y,x,y,z)+1;
//     int ans3 =solve(n-z,x,y,z)+1;

//     int ans = max(ans1,max(ans2,ans3));
//     return ans;
// }
// int main(){
//     int n=7;
//     int x=5;
//     int y=2;
//     int z=2;

//     //solve the function -> return maximum number of segment
//     int ans = solve(n,x,y,z);
//     if(ans < 0)
//     ans = 0;
//     cout<<"Answer is : "<< ans<< endl;
//     return 0;
// }


// void lastOccLTR(strings& s, char x,int i, int&ans){
//     //base case
//     if(i >= s.size()){
//         return ;
//     }
//     //ek case
//     if(s[i]== x){
//         ans =i;
//     }
//     //RE
//     lastOccLTR(s,x,i+1,0,ans){

//     }

//     void lastOccLTR(strings&s, char x,int i, int&ans){
//         if(i <0){
//             return ;
//         }
//         if(s[i]== x){
//             ans =i;
//             return ;
//         }
//         lastOccLTR(s,x,i-11,ans);
//     }

// }

// int main(){
//     string s;
//     cin>>s;
//     char x;
//     cin>>x;
//     int ans =-1;
//     lastOccLTR(s,x,ans);
//     cout<<ans<<endl;
//     return  o;

// }






// last occurence in recursiion
//  void lastOccLTR(string&s, char x,int i, int&ans){
//     // base case
//     if(i>= s.size()){
//         return ;
//     }
//     //ek case solution 
//     if(s[i]== x){
//         ans = i;
//     }
//     lastOccLTR(s,x,i+1,ans);

//  }
// int main(){ 
//     string s;
//     cin>>s;
//     char x;
//     cin>>x;
//      int ans =-1;
//      lastOccLTR(s,x,0,ans);
//      cout <<ans<<endl;

//      return 0;

// }






// int partition(int arr[], int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;

//     for (int j = low; j < high; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }

//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int pi = partition(arr, low, high);

//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// int main() {
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     quickSort(arr, 0, n - 1);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }






/// print all subarray using recursiion
// void printSubarray_util(vector<int>&nums, int start,int end ){
//     // base case
//     if(end == nums.size()){
//         return ;
    
//     }
//     for(int i = start; i<=end; i++){
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
//     // RE 
//     printSubarray_util(nums,start,end+1);
// }
// void printSubarray(vector<int>&nums){
//     for(int start = 0; start<nums.size(); start++){
//         int end =start;
//         printSubarray_util(nums, start,end);
//     }
// }

// int main(){
//     vector<int > nums{1,2,3,4,5};
//     printSubarray(nums);
//     return 0;
// }



