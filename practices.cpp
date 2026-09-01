#include <iostream>
using namespace std;

// ***factorial

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

//     cout << "Factorial = " << factorial(n);
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

// int main (){
//     double a, b;
//     char op;
//     cout<<"enter the two nuumber:";
//     cin>>a>>b;
//     cout<<"enter the operator which you want to perfom:";
//     cin>>op;
//      switch(op){
//         case '+':
//         cout<<"result ="<<a+b<<endl;
//         break;
//         case '-':
//         cout<<"result"<<a-b<<endl;
//         break;
//         case '*':
//         cout<<"result"<<a*b<<endl;
//         break;
//         case '/':
//         if(b!=0)
//         cout<<"result"<<a/b<<endl;
//     else
//     cout<<"divisible not allowed "<<endl;
// break;
// default:
// cout<<"invalid"<<endl;
//              }
// return 0;
// }


//  int main(){
//     int n,sum;
//     cout<<"enter the number:";
//     cin>>n;
//     while(n>9){
//         sum=0;
//         while(n>0){
//             sum=sum+n%10;
//             n=n/10;
//         }
//         n=sum;
//     }
//     cout<<"single digit ="<<n;
//     return 0;
//  }

// int main(){
//     int r1, c1, r2, c2;
//     cout<<"enter the row and col of A:";
//     cin>>r1>>c1;
//     cout<<" enter the row and col of B:";
//     cin>>r2>>c2;

//     if(c1!=c2){
//         cout<<"multiplication not possible";
//         return 0;
//     }
//     int A[10][10],B[10][10],C[10][10];
//     cout<<"enter matrix A";
//     for(int i=0; i<r1; i++)
//     for(int j=0; j<c1; j++)
//      cin>>A[i][j];

//      cout<<"enter matrix B";
//     for(int i=0; i<r2; i++)
//     for(int j=0; j<c2; j++)
//      cin>>B[i][j];

//      for(int i=0; i<r1; i++){
//      for(int j=0; j<c2; j++){
//         C[i][j]=0;

//         for(int k=0; k<c1; k++)
//         C[i][j]+=A[i][k]*B[k][j];
//      }
// }
// cout<<"result Matrix :";
// for (int i=0; i<r1; i++){
//     for(int j=0; j<c2; j++)
//     cout<<C[i][j]<<" ";
// cout<<endl;

// }
// return 0;
// }


// int main(){
//     int n;
//     cout<<"enter number of students:";
//     cin>>n;
//      int marks[n];
//      for(int i=0; i<n; i++)
//      cin>>marks[i];

//     sort(marks,marks+n);

//     cout<<"Top 3 marks ";
//     for(int i=n-1; i>=n-3; i--)
//     cout <<marks[i]<<" ";
// return 0; 
// }
 


// int main(){
//     int n ,temp , sum =0, digits=0;
//     cout<<"enter the number :";
//     cin>>n;
//     temp = n;
//     while(temp>0){
//         digits++;
//         temp/=10;
//     }
//     temp =n ;
//     while(temp>0){
//         sum+= pow(temp%10 ,digits);
//         temp/=10;
//     }
//     if(sum==n)
//         cout<<" no. is armstrong ";
//     else
//         cout<<" number is not armstong ";
    
//     return 0;
// }




// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin >> arr[i];

//     for(int i=0;i<n-1;i++)
//         for(int j=0;j<n-i-1;j++)
//             if(arr[j] > arr[j+1])
//                 swap(arr[j], arr[j+1]);

//     cout << "Sorted Array:\n";
//     for(int i=0;i<n;i++)
//         cout << arr[i] << " ";

//     return 0;
// }







// int findSqrt(int n){
//     int target = n;

//     int s = 0;
//     int e = n;
//     int ans = -1;

//     int mid = s + (e - s)/2;

//     while(s <= e){
//         if(mid * mid == target)
//             return mid;

//         if(mid * mid > target){
//             e = mid - 1;
//         }
//         else{
//             ans = mid;
//             s = mid + 1;
//         }

//         mid = s + (e - s)/2;
//     }

//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;

//     int ans = findSqrt(n);

//     cout<<"ans is "<<ans<<endl;

//     return 0;
// }



// bool binarySearch (int arr[][4],int rows, int cols, int target){
//     int s=0;
    
//     int e = rows*cols-1;
//     int mid =s +(e-s)/2;

//     while(s<=e){
//         int rowIndex = mid/cols;
//         int colIndex= mid%cols;

//         if(arr[rowIndex][colIndex] == target){
//             cout<<"found. at "<<rowIndex <<" "<<colIndex<<endl;
//             return true;
//         }
//         if(arr[rowIndex][colIndex] < target){
//             s= mid +1;

//         }else{
//             e = mid -1;
//         }
//         mid = s +(e-s)/2;
//     }
//     return false;

// }


// int main(){
//     int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
//     int rows = 5;
//     int cols = 4;
//     int target = 19;
//     bool ans = binarySearch(arr, rows, cols, target);
//      if(ans){
//         cout<<"found"<<endl;

//      }else{
//         cout<<"not found"<<endl;

//      }
// }


// int main() {
    
//     int n;
//     cin>>n;
//      int A[n];
//      for(int i=0; i<=n; i++)
//      cin>>A[i];
//     int item;
//     cin>>item;
//     int k=0;
//     int loc= -1;
//     while(loc == -1 && k<=n){
//         if(A[k]==item){
//             loc = k;
          
//         }
//          k=k+1;
//     }
//     if(loc == -1){
//         cout<<"item not found";

//     }else{
//         cout<<"item fount at "<<loc+1<<endl;
//     }
//     return 0;
    

// }


// int main(){
//     int n;
//     cin>>n;
//     int A[n];
//     for(int i=0; i<=n; i++){
//     cin>>A[i];
        
//     }
//     int item;
//     cin>>item;
//     int k =0
//     int loc = -1;
//     while(loc == -1 && k<=n){
//         if(A[k] == item){
//         loc = k;
//         }
//        k=k+1;
//         }
//     if(loc == 0){
//         cout<<"item not found";
//     }else{
//         cout<<"item not found at"<<loc+1<<endl;
//     }
//     return 0;
    
//     }
   
	

//**Linear search */

// int main() {
    
//     int n;
//     cin>>n;
//      int A[n];
//      for(int i=0; i<=n; i++){
//      cin>>A[i];
//      }
//     int item;
//     cin>>item;
//     int k=0;
//     int count =0;
//     int loc = -1;
//     while(k<n){
//         if(A[k] == item){
//             cout<<"item found at loc "<< k+1<<endl;
//             count++;
//         }
//         k = k+1;
//     }
//     if(count == 0){
//         cout <<"not found";
//     }
//     else{
//      cout<<"item found "<<count<<" times"<<endl;
//     }
//     return 0;
    
// }


//*********** */ Sortting  array

// int main(){
//  int n;
//       cin>>n;
//       int A[n];
//       for(int i=0; i<n; i++){
//           cin>>A[i];
//       }
//       for(int i=0; i<n-1; i++){
//           for(int j=0; j<n-i; j++){
//               if(A[j]>A[j+1]){
//                   swap(A[j],A[j+1]);
//               }
//           }
        
//       }
//       for(int i=0; i<n; i++)
//       cout<<A[i]<<" ";
      
//       return 0;

//  }
        
// int main(){
//     int n;
//     int A[n];
//     for(int i=0; i<n; i++){
//         cin>>A[i];
//     }
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i; j++)
//     }
//     int t = A[j];
//     A[j]=A[j+1];
//     A[j+1]=t;

//  for(int i=0; i<n; i++){
//     cout<<A[i];
//  }
// return 0;
// }
        

// int main() {
//       int n;
//       cin>>n;
//     int A[n];
//     for(int i=0; i<n; i++){
//         cin>>A[i];
//     }
    
//     int t;
    
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//         if(A[j]>A[j+1]){
//         t = A[j];
//         A[j] = A[j+1];
//         A[j+1] = t;}
//     }
//     }
   

//      for(int i=0; i<n; i++){
//      cout<<A[i]<<" ";
         
//      }
 
//      return 0;
//       }

// int main() {
//       int n;
//       cin>>n;
//     int A[n];
//     for(int i=0; i<n; i++){
//         cin>>A[i];
//     }
    
//     int t;
    
//     for(int i=1; i<n; i++){
//         for(int j=0; j<n-i; j++){
//         if(A[j]>A[j+1]){
//         t = A[j];
//         A[j] = A[j+1];
//         A[j+1] = t;}
//     }
//     }
   

//      for(int i=0; i<n; i++){
//      cout<<A[i]<<" ";
         
//      }
 
//      return 0;
//       }

///****INSERTION */

// int main() {
// 	int n;
//     cin>>n;
// 	int A[n];
// 	for(int i=0; i<n; i++){
// 	    cin>>A[i];
// 	}
	
// 	for(int k=1; k<n; k++){

// 	int temp = A[k];
// 	int ptr = k-1;
    
	
// 	while(A[ptr]>temp && ptr >=0){
// 	    A[ptr+1] = A[ptr];
// 	    ptr = ptr-1;
// 	}
// 	    A[ptr +1] = temp;
// 	}
// 	for(int i=0; i<n; i++){
// 	    cout<<A[i]<<" ";
// 	}
// 	return 0;

// }


// /SELECTION SORT******
// int main(){
//     int n; 
//     cin>>n;
//     int A[n];
//     for(int i=0; i<n; i++){
//         cin>>A[i];
//     }
//     int min ;
//     for(int i=0; i<n-1; i++){
//         min=i;
//         for(int j= i+1; j<n; j++){
//             if(A[j]>A[min]){
//                 min = j;
//             }
//         }
//         int t=A[i];
//         A[i]=A[min];
//         A[min]=t;
//     }
//     for(int i=0; i<n; i++){
//         cout<<A[i]<<" ";

//     }
//     return 0;
// }

     

//**to find the count of all positive and negative integer in an array */
        
// int main(){
//     int n;
//     cin>>n;
//     int A[n];
//     for(int i=0; i<n; i++){
//         cin>>A[i];
//     }
//     int count =0;
//     int neg =0;
//     for(int i=0; i<n; i++){
//         if(A[i]>0){
            
//             count++;
//         }else
//             neg++;


//     }
//         cout<<"positive"<<count<<endl;
//          cout<<"negative"<<neg<<endl;
        

    
//     return 0;
// }



///**to find the all occurence of a given elements */
// int main(){
//     int n;
//     cin>>n;
//     int A[n];
//     int target;
//     cin>>target;
//     for(int i=0; i<n; i++){
//         cin>>A[i];
//     }

//     int count =0;
//     for(int i=0; i<=n; i++){
        
//         if(A[i] == target)
//          count ++;
//     }
//     cout<<"last occurence at "<<count<<endl;
//     return 0;
     

//}


// 1.  write a program input a sorted aaray and input one element 
// as a target elementnow find 
// the location target element where it should be inserted


//2. write a programm to find out the location of last  occurence of every element 





// int binarySearch(int arr[], int n, int key) {
//     int beg = 0, end = n - 1;

//     while (beg <= end) {
//         int mid = (beg + end) / 2;

//         if (arr[mid] == key)
//             return mid;   // element found

//         else if (key < arr[mid])
//             end = mid - 1;   // search left

//         else
//             beg = mid + 1;   // search right
//     }

//     return -1;   // element not found
// }

// int main() {
//     int n, key;
//     cout << "Enter size: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter sorted elements:\n";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     cout << "Enter element to search: ";
//     cin >> key;

//     int result = binarySearch(arr, n, key);

//     if (result != -1)
//         cout << "Element found at index: " << result;
//     else
//         cout << "Element not found";

//     return 0;
// }


//sorting count 
int main() {
	int n;
    cout<<"Enter the size of Aarray :";
	cin>>n;
	int B[n];
	
	int A[n];
	for(int i=1; i<=n; i++){
	    cin>>A[i];
	}
	int k;
    cout<<"Enter the largest element:";
	cin>>k;
	
	int c[100];
	for(int i=0; i<=k; i++){
	   c[i]=0;}
	   
	for(int j=1; j<=n; j++){
	   c[A[j]]=c[A[j]] + 1;}
	   
	for(int i=1; i<=k; i++){
	    c[i]=c[i] + c[i-1];}
	    
	    
	for(int j=n; j>=1; j--){
	     B[c[A[j]]] = A[j];
	    c[A[j]]=c[A[j]]-1;}
	    
	    for(int i=1; i<=n; i++){
	        cout<<B[i]<<" ";
	    }
	    return 0;
	

 }


//Counting sort

// int main(){
//     int n;
//     cout<<"Enter the size of Array:";

//     cin>>n;
//     int b[n];
//     int A[n];
//      for(int i=0; i<n; i++){
//         cin>>A[i];
//      }
//      int k;
//      cout<<"Enter the largest element:";
//      cin>>k;





//     int c[n];
//     for(int i=0; i<=k; i++){
//         c[i]=0;
//     }
//     for(int j=1; j<n; j++){
//         c[A[j]]=c[A[j]]+1;
//     }
//     for(int i=1; i<=k; i++){
//         c[i]=c[i]+c[i-1];
//     }
//     for(int j=n; j>=1; j--){
//         b[c[A[j]]]=A[j];
//         c[A[j]]=c[A[j]]-1;
//     }
//     for(int i=0; i<n; i++){
//         cout<<b[i]<<" "<<endl;
    
//     }
//     return 0;
//  }








































//// First occurence
// int firstOcc(int A[], int n, int key){
//     int s=0; 
//     int e=n-1;
//     int mid = s + (e-s)/2;
//     int ans= -1;
//     while(s<=e){
//         if(A[mid]==key){
//             ans = mid;
//             e=mid-1;
//         }else if(A[mid]>key){
//             s= mid+1;
//         }else{
//             e=mid-1;
//         }
//         mid= s+(e-s)/2;
//     }
//     return ans;
// }
// int main(){
// int n;
// cout<<"Enter the size of array :";
// cin>>n;

// int A[n];
// for(int i=0; i<n; i++){
//     cin>>A[i];
// }
// int key;
// cout<<"enter the key which you want to find :";
// cin>>key;

// int result =firstOcc(A,n,key);
// cout<<"index of no. at"<<result;
// return 0;

// }

//last occurence
// int firstOcc(int A[], int n, int key){
//     int s=0; 
//     int e=n-1;
//     int mid = s + (e-s)/2;
//     int ans= -1;
//     while(s<=e){
//         if(A[mid]==key){
//             ans = mid;
//             s=mid+1;
//         }else if(A[mid]>key){
//             s= mid+1;
//         }else{
//             e=mid-1;
//         }
//         mid= s+(e-s)/2;
//     }
//     return ans;
// }
// int main(){
// int n;
// cout<<"Enter the size of array :";
// cin>>n;

// int A[n];
// for(int i=0; i<n; i++){
//     cin>>A[i];
// }
// int key;
// cout<<"enter the key which you want to find :";
// cin>>key;

// int result =firstOcc(A,n,key);
// cout<<"index of no. at"<<result;
// return 0;

// }






