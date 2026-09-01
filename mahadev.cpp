# include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int main(){
//     cout<<"Har Har Mahadev"<<endl;
//     return 0;
// }

// int main(){
//     int a;
//     cout<<"Har Har Mahadev:";
//     cin>>a;
//     return 0;
// }


// int main(){
//     int n;
//     cin>>n;
//     for (int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++){
//             cout<<"* ";
//         }
//          cout<<endl;
//         }
        
//         for(int i=0; i<n; i++){
//             for (int j=0; j<i; j++){
//                 cout<<" ";
//             }
//             for(int j=0; j<n-i; j++){
//                 cout<<"* ";
//             }
//             cout<<endl;
//         }
//         return 0;
    
//     }




    // int main(){
    //     int n;
    //     cin>>n;
    //     for(int i=0; i<n; i++){
    //         for (int j=0; j<i; j++){
    //             cout<<" ";
    //         }
    //         for(int j=0; j<n-i; j++){
    //             cout<<"* ";
    //         }
    //         cout<<endl;
    //     }
    //     return 0;
    // }

// int main(){
//     int n ;
//     cin>>n;
//     for (int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             if(j==0 || j==i || i==n-1){

//                 cout<<j+1;
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
     
// int main(){
//     int n;
//      cin>>n;
//      for (int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<" ";

//         }
//         for(int j=0; j<i; j++){
//             cout <<" "<<i;
//         }
//         cout <<endl;
        
        
        
//      }
//      return 0; 
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++ ){
//         for(int j=0 ; j<n; j++){
//             cout<<"*   ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//     float circle(float radius){
//         float area = 3.14 * radius * radius;
//         return area;
//     }
// int main(){
//     float radius;
   
//     cin>>radius;
//    float area = circle(radius);
//     cout<<area<<endl;
//     return 0;
// }

// int main(){
//     int arr[]={1,1,2,3,4,5,};
//     int brr[2]={2,3};
//     cout<<"array created succesfully"<<endl;
//     return 0;
// }

// int main(){
//     int arr[5]={10,200,30,40,50};
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<endl;;
//     }
//     return 0;

    
    

// }


// int main(){
//     int i;
//     int arr[ 10];
//     cout<<"enter the value of array that you want to store in this array box :";
//     for(int i=0; i<10; i++){

//         cin>>arr[i];
//     }
//     cout<<"printing the value of arr succesfull"<<arr[i];

    
    

// }


// int main(){
//     int arr[5];
//     cout<<"enter the value of array:";
//     for(int i=0; i<5; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<5; i++ ){

//         cout<<2*arr[i]<<endl;
//     }
//     return 0;
// }
// bool find(int arr[],int size, int key){
//     for(int i=0; i<size; i++){
//         if(arr[i]==key)
//         return true;
//     }
//     return false;
// }


// int main(){
//     int arr[8]={2,3,4,5,6,7,8,3};
//     int size= 8;
//     cout<<"enter the key to find :";
//     int key;
//     cin>>key;
//     if(find(arr,size,key)){

//         cout<<"found"<<endl;
//     }
//     else{
//         cout<<"not found"<<endl;
//     }

    
// }


// int main(){
//     int arr[]={0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};
//     int size=15;
//     int numZero=0;
//     int numOne=0;
//     for(int i=0; i<size; i++){
//         if(arr[i]==0){
//             numZero++;
//         }
//         if(arr[i]==1){
//             numOne++;
//         }
//     }
//     cout<<"number os zeros "<<numZero<<endl;
//     cout<<"number os one "<<numOne<<endl;
//     return 0;

// }

// int main(){
//     int arr[]={23,45,67,43,54,66,78,23};
//     int size=8;
//     int maxi = INT_MIN;
//     int min =INT_MAX;
//     for(int i=0; i<size; i++){
//         if(arr[i]>maxi){
//             maxi = arr[i];
//         }
//         if(arr[i]<min){
//             min = arr[i];
//     }
// }
//     cout<<"maximum number is "<<maxi <<endl;
//     cout<<"minimum number is "<<min <<endl;
//     return 0;
// }



// *****EXTREME PRINT
// int main(){
//     int arr[8]={10,20,30,40,50,0,70,80};
//     int size=8;
//     int start =0;
//     int end=size-1;
//     while(true){
//         if(start>end)
//         break;
//     cout<< arr[start] << " ";
//     cout<< arr[end] << " ";
//     start++;
//     end--;

//     }
//     return 0;
// }


// ****REVERSE AN array
// int main(){
//     int arr[]={2,3,4,56,7,8,9};
//     int size=7;
//     int start = 0;
//     int end= size-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;

//     }
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";

//     }
//     return 0;

// }


// int main(){
//     vector<int> arr;


//     cout<<arr.size()<<endl;
    
//      cout<<arr.capacity()<<endl;

//      arr.push_back(5);
//      arr.push_back(3);
//      for(int i=0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//      }
//     return 0;
// }

// int main(){
//     vector<int>arr;
//     cout<<arr.size()<<endl;
//     cout<<arr.capacity()<<endl;
//     arr.push_back(8);
//     arr.push_back(3);
//     for (int i=0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;

//     arr.pop_back();
//      for (int i=0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;
//     cout<<"vector arr is empty or not "<<arr.empty()<<endl;
//     vector<int>drr;
//     cout<<"vector arr is empty or not "<<drr.empty()<<endl;

//     return 0;
    

// }

//Unique Element
// int findUnique(vector<int> arr){
//     int ans =0;
//     for(int i=0; i<arr.size();  i++){
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }
// int main(){


// int n;
// cout<<"Enter the size of array :"<<endl;
// cin>n;
//  vector<int>arr(n);
//  cout<<"enter the elements:"<<endl;
//  for(int i=0; i<arr.size(); i++){
//     cin>>arr[i];
//  }
//  int UniqueElement = findUnique(arr);
//  cout<<"Unique Element is "<<UniqueElement <<endl;
//  return 0;
//  }




// ***Union of two aray***
// int main(){


// int arr[]= {1,2,3,4,7,9};
// int sizea=6;
// int brr[]={2,4,6,8};
// int sizeb=4;

// vector<int>ans;


// for(int i=0; i<sizea; i++){
//     ans.push_back(arr[i]);
// }
// for(int i=0; i<sizeb; i++){
//     ans.push_back(brr[i]);
// }
// cout<<"Printing ans array"<<endl;
// for(int i=0; i<ans.size(); i++){
//     cout<<ans[i]<<" ";

// }
// return 0;

// }



// ****INTERSECTION*****
// int main(){
//     vector<int>arr{1,2,3,5,9,6,8};
//     vector<int>brr{3,4,10,2,5,6,8};

//     vector<int>ans;
//     for(int i=0; i<arr.size(); i++){
//         int element = arr[i];
//         for(int j=0; j<brr.size(); j++){
//             if( element == brr[j]){
//                 ans.push_back(element);
//             }
//         }
//     }
//     for(auto value: ans){
//         cout<<value<<" " ;
//     }
//     return 0;
//      }


// int main(){
//     vector<int>arr{10,20,30,40};
//     int sum=80;
//     for(int i=0; i<arr.size(); i++){
//         int element = arr[i];


//         for(int j=i+1; j<arr.size(); j++){
//             if(element + arr[j] == sum){
//                 cout<<"pair Found"<< sum<<endl;
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

  //2D ARRAY ******
// int main(){
//     int arr[3][3];


//     int brr[3][3]={ {1,2,3} , {4,5,6} ,{2,4,6}};
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<brr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<" printing column wise"<<endl;
    
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<brr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;

// }


//**** ROW WISE SUM
// int main(){
//     int brr[3][3]={ {1,2,3} , {4,5,6} ,{2,4,6}};
//     for(int i=0; i<3; i++){
//         int sum =0;
//         for(int j=0; j<3; j++){
//             sum = sum + brr[i][j];
//             // cout<<brr[i][j]<<" ";
//         }
//         //row wise sum
//         cout<<sum<<" "<<endl;
//     }
//     cout<<endl;
   

    
//     return 0;

// }


//**** COLUMN WISE SUM 
// int main (){
//     int brr[3][3]={{1,2,3},{4,5,6},{4,4,3}};
//     for(int i=0; i<3; i++){
//         int sum =0;
//         /// column wise sum 
//         for(int j=0; j<3; j++){
//             sum = sum + brr[j][i];
//         }
//         cout<<sum <<" ";
//         // cout<<endl;
//     }
//     return 0;
// }



// bool findkey(int arr[][3], int rows, int cols, int key){
//     for (int i =0; i<rows; i++){
//         for (int j=0; j<cols; j++){
//             if(arr[i][j]== key)
//             return true;
//         }
//     }
//     return false;
// }
// void printRowWiseSum(int arr[][3], int rows, int cols){
//     cout<<" printing row wise sum "<<endl;
//     for(int i=0;  i<rows; i++){
//         int sum = 0;
//         for(int j=0; j<cols; j++){

//         }
//     }
// }




// ******TRANSPOSE*****

// void transpose(int arr[][3], int r, int c){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
// }
// int main(){

// }



// int main(){
//     vector<vector<int>>arr;
//     vector<int>a{1,2,3};
//     vector<int>b{3,4,5};
//     vector<int>c{6,7,8};

//     arr.push_back(a);
//     arr.push_back(b);
//     arr.push_back(c);
//     for(int i=0; arr.size(); i++){
//         for(int j=0; j<arr[0].size(); j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// ****TO ARRANGE NEGATIVE NUMBER IN LEFT SIDE
// int main(){
//   int arr[]={ -9,-2,-3,-4,-5,-6,-7};
//   int size=7;
//   int start =0;
//   int end = size-1;
//   while(start<end){
//   if(arr[start]<0){
//     start++;
//   }
//     else if(arr[end]>0){
//       end--;
//     }
//     else{
//       swap(arr[start],arr[end]);
//     }}
//     for(int i=0; i<size; i++){
//       cout<<arr[i]<<" ";

    
   
//   }
//   return 0;
// }

//*****Duplicate number */
//  int main(){
//   int arr[]={1,2,2,3,4,5,52,5,2,5,2,5};
//   int size = 12;
//   cout<<"duplicate number is : ";
//   for(int i=0; i<size; i++){
//     for(int j=i+1; j<size; j++){
//       if(arr[i]==arr[j]){
//         cout<<arr[i]<<" ";
//         break;
//       }
//     }
//   }
//   return 0;
//  }



// ***Missing element frm an array with duplicate****
// int main(){
//   int arr[]={1,2,2,4,5};
//   int size =5;
//   long long sum = 0, sumSq=0;
//   for(int i=0; i<size; i++){
//     sum= sum+arr[i];
//     sumSq = sumSq + (long long )arr[i]*arr[i];
//   }
//   long long S = size*(size +1)/2;
// long long S2 = size * (size+1)*(2*size+1)/6;
// long long diff = S-sum;
// long long diffSq = S2-sumSq;
// long long sumMD=diffSq/diff;
// int missing = (diff + sumMD)/2;
// int duplicate = sumMD - missing;
// cout<<"Missing number:"<<missing<<endl;
// cout<<"duplicate number:"<<duplicate<<endl;
// return 0; 
// }

//***find first repeating elements */
// int main(){
//   int first Repeated

// }

// int main(){
// vector<int> commonElements(int A[], int B[],int C[], int n1, int n2, int n3)
// {
//   vector<int>ans;
//   int i, j ,k;
//   i=j=k=0;
//   while( i<n1 && j<n2 && k<n3){
//     if(A[i]==B[j] && B[j]==C[k]){
//       ans.push_back(A[i]);
//       i++, j++, k++;
//     }
//     else if(A[i]<B[j] && A[i]<C[k]){
//       i++;
//     }else if(B[j]<C[k] && B[j]<A[i]) {
//       j++;
//     }else{
//       k++;
//     }
//   }
//   return ans;
// }
// }


// void wavePrintMatrix(vector<vector<int>>v){
//   int m=v.size();   //no. of rows
//   int n=v[0].size(); //no. of column
//   for(int startcol=0; startcol<n; startcol++){
//     /// even no. of column--> top to bottom
//     if((startcol & 1) == 0){
//       for(int i=0; i<m; i++){
//         cout<<v[i][startcol]<<" ";
//       }
//     }else{
//       //odd no of col--> bottom to top
//       for (int i=m-1; i>0; i--){
//         cout<<v[i][startcol]<<" ";
//       }
//     }
//   }
// }
// int main(){
//   vector<vector<int>>v{
//     {1,2,3,4},
//     {5,6,7,8},
//     {9,10,11,12},
    


//   };
//   wavePrintMatrix(v);
//   return 0;
// }


//   int main(){

// void spiralPrintMatrix(vector<vector<int>>& v){
//   vector<int>ans;
//     int m=v.size();
//   int n=v[0].size();
//   int total_elements = m*n;

//   int startRow = 0;
//   int endingCol = n-1;
//   int endingRow=m-1;
//   int strartingCol= 0;
//   int cont =0;
//   while(count<total_elements){
//     //print starting
//     for(int i=startingCol; i<=endingCol && count<total_elements; i++){
//       ans.push_back(v[startingRow][i]);
//       count++;
//     }
//     startingRow++;

// for(int i=startingRow; i<=endingRow && count<total_elements; i++){
//       ans.push_back(v[endingCol][i]);
//       count++;
//     }
//     endingCol--;
//     for(int i=endingCol; i<=startingCol && count<total_elements; i--){
//       ans.push_back(v[endingRow][i]);
//       count++;
//     }
//     endingRow--;
    

//     for(int i=endingRowl; i<=staringRow && count<total_elements; i--){
//       ans.push_back(v[startingRow][i]);
//       count++;
//     }
//     startingCol++;
// }
// }
// }


//   BINARY SEARCHING 
// int binarySearch(int arr[],int size, int target){
//   int start =0;
//   int end = size-1;
//   int mid = (start + end)/2;
//   while(start<=end){
//     int element = arr[mid];
//     if(element == target){
//       return mid;
//     }
//     else if(target<element){
//       //search in left 
//       end= mid +1;
//     }else{
//       //search in right
//       start = mid +1;
//     }
//     mid = (start +end )/2;
//   }
//   return -1;
// }
// int main(){
//   int arr[] = {2,4,6,8,10,12,16};
//   int size = 7;
//   int target =12;
//   int indexOftarget = binarySearch(arr,size,target);
//   if(indexOftarget == -1){
//     cout<<"target not found"<<endl;

//   }else{
//     cout<<"target found at "<<indexOftarget<<" index"<<endl;
//   }
//   return 0;
// }



//OR
// int binarySearch(int arr[],int size, int target){
//   int start =0;
//   int end = size-1;
//   int mid = (start + end)/2;
//   while(start<=end){
//     int element = arr[mid];
//     if(element == target){
//       return mid;
//     }
//     else if(target<element){
//       //search in left 
//       end= mid +1;
//     }else{
//       //search in right
//       start = mid +1;
//     }
//     mid = (start +end )/2;
//   }
//   return -1;
// }

// int main(){
// vector<int>v{1,2,3,4,5,6};
// if(binary_search(v.begin(), v.end(), 6)){
//   cout<<" found"<<endl;
// }else{
//   cout<<" not found"<<endl;
// }
//   return 0;
// }



// ***binary search by array method 
// int binarySearch(int arr[],int size, int target){
//   int start =0;
//   int end = size-1;
//   int mid = (start + end)/2;
//   while(start<=end){
//     int element = arr[mid];
//     if(element == target){
//       return mid;
//     }
//     else if(target<element){
//       //search in left 
//       end= mid +1;
//     }else{
//       //search in right
//       start = mid +1;
//     }
//     mid = (start +end )/2;
//   }
//   return -1;
// }

// int main(){
// vector<int>v{1,2,3,4,5,6};
// int arr[] = {1,2,3,45,5,6,7};
// int size = 7;
// if(binary_search(arr,arr +size,  6)){
//   cout<<" found"<<endl;
// }else{
//   cout<<" not found"<<endl;
// }
//   return 0;
// }



//*****first occurence */
// int firstOccurence(vector<int>v, int target){
//   int s = 0;
//   int e = v.size() -1;
//   int mid = (s-e)/2;
//   int ans = -1;
//   while(s<=e){
   
//     if(v[mid] == target){
//       ans = mid;
//       e= mid-1;

//     }else if(target > v[mid]){
//       s=mid +1;
//     }
//     else if(target < v[mid]){
//       e= mid - 1;
//     }
//     mid =s + (s-e)/2;
//   }
//   return ans;
// }
// int main(){
//   vector<int>v{1,2,3,4,4,4,4,4,9};
//   int target =4;
//   int indexOfFirstOcc = firstOccurence(v,target);
//   cout<<"ans is "<<indexOfFirstOcc <<endl;
//   return 0;
// }


//last occurence
// int lastOcc(vector<int> arr, int target){
//   int s = 0;
//   int e = arr.size()-1;
//   int mid = s +(e-s)/2;
//   int ans =-1;
//   while( s <= e ){
//     if(arr[mid] == target){
//       ans = mid;
//       s= mid +1;

//     }else if(target < arr[mid]){
//       e = mid -1;
//     }
//     else if(target > arr[mid]){
//       s =mid +1;
//     }
//     mid = s+ (e-s)/2;
//   }
//   return 0;
// }
// int main(){
//   vector<int> v{1,2,3,4,7,7,7,7,7,7,7,7,7,7,9};
//   int target = 21;
//   int ans = lastOcc(v, target );
//   cout<<" last occurence is at "<<ans <<endl;
//   return 0;
// }

// int findSqrt( int n ){
//   int target = n;
//   int s = 0; 
//   int e = n;
//   int ans = -1;
//   int mid = s+(e-s)/2;
//   while(s <= e ){
//     if(mid*mid == target)
//     return mid;
//   if(mid*mid > target){
//     e= mid - 1;
//   }
//   else{
//     ans = mid;
//     s= mid +1;
//   }
// mid= s+(e-s)/2;
//   }
//   return ans;
// }
// int main(){
//   int n;
//   cout<<"Enter the number: ";
//   cin>>n;
//    int ans = findSqrt(n);
//    cout<<" Ans is "<<ans <<endl;
//    return 0;
// }

// void printHello(int){
//   int n;
//   if(n == 11)
//   return ;
// cout<<" Hello" <<endl;
// }
// int main(){
//   printHello(5);
//   return 0;
// }













// // to find the prine number below the given number
// vector<bool>Sieve(int n){
// //create a sieve array of N size telling isPrime. 
//   vector<bool>sieve(n+1, true);
//   sieve[0]=sieve[1]=false;
//    for(int i=2; i<=n;  i++){
//     if(sieve[i] == true){
//       int j=i*i;
//       while(j<=n){
//         sieve[j] = false;
//         j +=i;
//       }
//     }
//    }
//    return sieve; 

// }
// int main(){
//   vector<bool>sieve=Sieve(25);
//   for(int i=0; i<=25; i++){
//     if(sieve[i]){
//       cout<<i<<" ";
//     }
//   }
//   return  0; 
// }
  







  















  







  






