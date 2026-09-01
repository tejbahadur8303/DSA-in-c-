#include <iostream>
using namespace std;
// int main(){
//     int marks[5]= {99,100, 54,28,29};
//     marks[0]=101;
//     cout << marks[0] << endl;
//     cout << marks[1] << endl;
//     cout << marks[2] << endl;
//     cout <<  marks[3]<< endl;
//     cout << marks[4] << endl;
//     return 0;
// }


// int main(){
//     int size =5;
//     int marks [size];
//     for(int i=0; i<size; i++){
//         cin>>marks[i];

//     }
//     for( int i=0;  i<size; i++)
//     {
//         cout<<marks[i]<<endl;
//     }
//     return 0;
// }


// int main(){
//     int nums[]= {5,15,22,1, -15, -24};
//     int size =6;
//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     for(int i=0; i<size; i++){
//            smallest = min(nums[i], smallest);
//            largest = max(nums[i], largest);
//         }
    
//     cout << "smallest = "<<smallest <<endl;
//     cout<< "largest = " <<largest <<endl;
//     return 0;

// }


// int main(){
//     int a=2;
//     int b=4;
//     int s=a+b;
//     cout<<"sum="<<s<<endl;
//     return 0;
// }






// int main(){
//     int size,i ,j;
//     cin>> size;
//     int a[size];
//     cout<< "Enter array element";
//     for (i=0; i<size; i++){
//         cin>>a[i];
//     }
//     for ( i=0; i<size ; i++){
//         for (j=0; j< size-i-1; j++){
//             if( a[j]>a[j+1]){
//              int temp=a[j];
//             a[j] = a[j+1];
//             a[j+1]=temp;
//         }}
    
    
    

// cout<<"sorted array:";
// for (i=0; i<size; i++)
// cout<<a[i] << '" ";

//     }
// cout<<endl;
// return 0;
//  }


// int linearsearch(int arr[], int sz, int target){
//     for (int i=0; i<sz;  i++){
//         if (arr[i]== target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main (){
//     int arr[] = {4, 2, 7, 8, 1,2,5};
//     int sz=7;
//     int target =50;
//     cout << linearsearch(arr, sz, target) << endl;
//     return 0;
// }


//REVERSE AN ARRAY

// void  reverseArray(int arr[], int sz){
//     int start = 0, end =sz-1;;
//     while (start < end ){
//         swap( arr[start ], arr[end]);
//         start++;
//         end--;

//     }
// }
// int main (){
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int sz=7;
//     reverseArray(arr, sz);
//     for ( int i=0; i<sz; i++){
//         cout << arr[i] << " ";
//         }
//         cout << endl;
//     return 0;
// }





/// 2



// void reverseArray(int arr[], int sz){
//     int start=0, end=sz-1;
//     while (start < end){
//         swap (arr[start], arr[end]);
//            start++;
//           end--;
//     }
// }
// int main(){
//     int arr[]= { 2, 4, 5, 3, 23, 43 };
//    int  sz=6;
//    reverseArray(arr, sz);
//    for ( int i=0; i< sz; i++){
//     cout<< arr[i] << " ";

//    }
//    cout << endl;
//    return 0;
// }

// vector 
// int main(){
//     vector <int> vec = { 1, 2, 3,4};
//     cout << vec[0];
//     cout << vec[1];
//     cout << vec[2];
//     cout << vec[3];
//     cout << vec[4];
//     cout << vec[5];
// return 0;
// }

// int main (){
//     vector<char> vec = {'a','b','c','d','e'};
//     cout <<" size =" << vec.size()<< endl;


// return 0;
// }


// int main (){
//     vector<char> vec ;
//     vec.push_back(25);
//     vec.push_back(23);
//     vec.push_back(22);
//     vec.push_back(21);
//     cout << " after push back size = "<< vec.size() << endl;
//     for ( char val : vec){
//         cout << val << endl; 

//     }


// return 0;
// }



// int main(){
//     vector <int> vec;
//     vec.push_back(0);
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(5);
//     cout << vec.size ( )<< endl;
//     cout << vec.capacity() << endl;
//     return 0;

// }


// int main (){
//     int singleNumber(vector<int>& nums){
//         int  ans = 0;
//         for ( int val:nums){
//             ans = ans^val;
//         }
//          return ans;
//     }
//}

// int main(){
//     int n=5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     for ( int st=0; st<n; st++){
//     for (int end=st; end<n; end++){
//         for (int i=st; i<=end; i++){
//             cout << arr[i];
//         }
//         cout<< " ";

//     }
//     cout <<endl;
// }
// return 0;
// }






/// 2 D array


// int main (){
//     int a[3][3], b[3][3], c[3][3], i, j;
//     cout << " enter the element of first matrix";
//     for (i=0 ; i<3;  i++){
//         for( j=0; j<3; j++){
//         cin>> a[i][j]  ;
//     }
// }
// cout<<" enter the element of secont matrix";
// for (i=0; i<3; i++){
//     for (j=0; j<3; j++){
//         cin>>b[i][j] ;
//     }
// }
// cout <<" The addition of two matrix is";
// for (i=0; i<3; i++){
//     for (j=0; j<3; j++){
// c[i][j]= a[i][j]+b[i][j];
// cout << c[i][j] << " ";
// }
// cout << endl;
// }
// return 0;
// }



// int main (){
//     int a[3][3], b[3][3], c[3][3], i, j;
//     cout << " enter the element of first matrix";
//     for (i=0 ; i<3;  i++){
//         for( j=0; j<3; j++){
//         cin>> a[i][j]  ;
//     }
// }
// cout<<" enter the element of secont matrix";
// for (i=0; i<3; i++){
//     for (j=0; j<3; j++){
//         cin>>b[i][j] ;
//     }
// }
// cout <<" The substraction  of two matrix is";
// for (i=0; i<3; i++){
//     for (j=0; j<3; j++){
// c[i][j]= a[i][j]-b[i][j];
// cout << c[i][j] << " ";
// }
// cout << endl;
// }
// return 0;
// }

// int main (){
//     int a[3][3], b[3][3], c[3][3], i, j, k;
//     cout << " enter the element of first matrix"<<endl;
//     for (i=0 ; i<3;  i++){
//         for( j=0; j<3; j++){
//         cin>> a[i][j]  ;
//     }
// }
// cout<<" enter the element of secont matrix"<<endl;
// for (i=0; i<3; i++){
//     for (j=0; j<3; j++){
//         cin>>b[i][j] ;
//     }
// }
// cout <<" The multiplication  of two matrix is"<<endl;
// for (i=0; i<3; i++){
//     for (j=0; j<3; j++){
//         c[i][j]=0;
//         for( k=0; k<3; k++){
// c[i][j]= c[i][j]+a[i][k] *b[k][j];
//         }
// cout << c[i][j] << " ";
//     }
// cout << endl;
// }
// return 0;
// }


// int main (){
//     int a[3][3], b[3][3], c[3][3], i, j, sum=0;
//     cout << " enter the element of first matrix"<<endl;
//     for (i=0 ; i<3;  i++){
//         for( j=0; j<3; j++){
//         cin>> a[i][j]  ;
//     }
// }
// cout<<" enter the element of secont matrix"<<endl;
// for (i=0; i<3; i++){
//     for (j=0; j<3; j++){
//         cin>>b[i][j] ;
    
// }
// cout <<" The addition of diagonal element is"<<endl;


// for(i=0; i<3; i++){

//     if( i==j || i + j == 2){
//     sum =sum + a[i][j];
//         }
//         cout << "sum" <<endl;
// }

// cout << c[i][j] << " ";
//     }
// cout << endl;
// }
// return 0;
// }

// int main(){
//     vector <int> num(10);
//     for( int i=0; i<10; i++){
//         cin>>num[i];                      

//     }
//     num.push_back(3);
    
//     for(int i=0; i<11; i++){
//         cout<<num[i]<<" ";
        
//     }
//     cout << endl;

//     num.clear();
//     cout << num.size() << endl;
    

//     return 0;
// }



// int main (){
//     vector <int> num{2, 3, 4, 5, 3};
//     num.push_back(22);
//     num.push_back(23);
//     for(i=0; i<num.size(); i++)
//     num.pop_back(2);
// num.pop_back(3);
// for(int i=0; i<7; i++){
//     cout<<num[i];
// }


// return 0;
// }

///break and continue me difference
// for and while me difference
// entry control loop and  exit control loop


// Fibonacci series
// int main(){
//     int size, i, fo=0, f1=1, f2;
//     cin>>size;
//     int a[size];
//     cout<<" The fibonacci series"<<fo<<f1;
//     for (i=1; i<=size-2; i++){
//         f2= fo+f1;
//         cout <<f2<<" ";
//         fo=f1;
//         f1=f2;


    
//     }
//     cout<<endl;
//     return 0;
// }
// int main(){
//     vector<int>size();
//     int i, fo=0; f1=1; f2;
//     cin>>size;
//     for(int i=1; i<=size-2; i++)
//     for(int i=0; i<size; i++){
// cout<<size()<<" "<<endl;}
// return 0;
// }


//find the sum of series 
// int main(){
// int size, i;
// float sum=0;
// cin>>size;
// for(int i=1; i<=size; i++){
//     sum=sum + sqrt(i);
// }
// cout<<" the sum of sum is "<<sum;
// return 0;
// }


// int main(){
// int size, i, fact=1;
// float sum=0;
// cin>>size;
// for(int i=1; i<=size; i++){
//     fact=fact*i;
//     sum=sum + (1/fact);
// }
// cout<<" the sum of series is "<<sum<<endl;;
// return 0;
// }

// int main(){
// int size, i;
// float sum=0;
// cin>>size;
// for(int i=1; i<=size; i++){
//     sum=sum + pow(i,i);
// }
// cout<<" the sum of sum is "<<sum;
// return 0;
// }

// else if 

// int main(){
//     int size, i;
//     cin>>size;
//     float sum=0;
//     for(int i=0; i<=size; i++){
//         sum=sum+pow(i,2);
//     }
//     cout<<" sum of series is "<<sum;
//     return 0;
// }

// int main(){
//     int size,i;
//  float sum=0;
//  cin>>size;
//  for (int i=1; i<=size; i++)
//  { sum = sum + (1/sqrt(i));
//  }
//     cout<<" the sum of series "<< sum ;
//     return 0;
 
// }

// int main(){
//     int a, b, c;
//     cout<<" enter a :";
//     cin>>a;
//     cout<< " enter b:";
//     cin>>b;
//     cout<<" enter c : ";
//     cin>>c;
//     if(a>=b && a>=c){
//         cout<<" largest is a ="<< endl;

//     }else if(b>=a && b>=c){
//         cout<<" largets is b"<<endl;

//     }else {
//         cout << " largest is c"<< endl;
//     }
//     return 0;
// }

// int main(){
//     bool isAdult;
//     int age;
//     cout <<" enter your age : ";
//     cin>>age;
//     if(age>=18){
//         isAdult = true;

//     }else{
//         isAdult = false;
//     }
//     isAdult = age >= 18 ? true:false;
//     return 0;
// }
// int main(){
//         int a, b;
//         char op;
//         cout<<" enter a:";
//         cin>>a;
//         cout<<" enter b :";
//         cin>>b;
//         cout<<" enter operator  :";
//         cin>>op;
//         // calculator
//         if( op == '+'){
//                 cout<<" a+b ="<< (a+b) << endl;
//         }else if(op == '-'){
//                 cout<<" a-b ="<< ( a-b)  << endl;
//         }else if (op == '*'){
//                 cout<<" a*b ="<< (a*b) << endl;
//         }else if(op == '/'){
//                 cout<<" a/b ="<< (a/b) << endl;
//         }else{

//                 cout <<" invalid  operator " <<endl;
//         }
//         return 0;

//}



//ARRAY ****************************************************************************************


// int main(){
    
//     int marks[5]={1, 2, 3, 5, 7};
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
//     cout<<marks[4]<<endl;
//     return 0;
// }


// int main(){
//     int arr[25] ={ 7, 5, 2, 1, 3};
//     int n = sizeof(arr)/sizeof(int);
//     for(int i=0; i<=n; i++){
//         cout<<arr[i] <<" ";
//     }
//     cout<<end
//     l;
//     return 0;
// }






// int main(){
    
//     int arr[]  ={5, 4 , 3,  9 ,12};
//     int n= sizeof(arr)/ sizeof(int);
//     int max = arr[0];
//     for(int i=0; i<=n; i++){
//         if(arr[i]> max){
//             max = arr[i];
//             cout<<" assigning val"<<arr[i]<<"  to max"\n;
//         }
//     }
//         cout<<"max=" <<max<<endl;
    
    
//     return 0;
// }



//Reverse  of given number      ********************************************************************************************




// void printArr(int *arr, int n){
//     for(int i=0; i<n; i++){
//         cout << arr[i] <<",";

//     }
//     cout<<endl;
// }

// int main(){
//     int arr[]= {5, 4, 3, 9, 2};
//     int n = sizeof(arr)/ sizeof(int);
//     int copyArr[n];
//     for(int i=0; i<n; i++){
//         int j = n-i-1;
//         copyArr[i]= arr[j];
        
//     }
//     for(int i=0; i<n ; i++){
//         arr[i]= copyArr[i]; 
//     }
//     printArr(arr , n);
//     return 0;
// }




//   void printArr(int *arr, int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<", ";
//     }
//     cout<<endl;
//   }
// int main(){
//     int arr[]={5, 4, ,3 , 2,9 };
//     int n =sizeof(arr) / sizeof(int );
//     int start =0, end =n-1;
//     while(start<end ){
//         int temp =arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;

//         start++;
//         end--;
//     }
//     printArr(arr, n);
//     return 0;
// }




///.  Pointer **************************************************************
// int main(){
//     int x=10;
//     int *ptr = &x;

//     int y = 25;
//     ptr= &y;
//     cout<<*ptr<<endl;
//     return 0;
// }

// int main(){
//     int a=5;
//     int *ptr = &a;
//      cout<< ptr <<"\n";
//      ptr = ptr + 3;
//      cout<<(ptr-3)<<"\n";
//      return 0;
// }




// void printArr(int *ptr, int n){
// //     for(int i=0; i<n; i++){
//         cout<<*(ptr+i)<<endl;
//     }
// }
// int main (){
//     int arr[]= {1, 2, 3, 4, 5};
//     int n= sizeof(arr)/sizeof(int);
//     printArr(arr, n);
//     return 0;
// }
// int main(){
//     int arr[] ={1, 2, 3, 4, 5};
//     int *ptr1 = arr;
//     int *ptr2 = ptr1 + 3;
//     cout<< *ptr1 <<"\n";
//     cout<< *ptr2 <<"\n";
//     cout<<ptr2-ptr1<<endl;
//     return 0;
// }

/// Print of subarrays*********************************************************
// void printSubarrays(int *arr, int n){
//     for(int start=0; start<n; start++){
// for(int end=start; end<n; end++){
//     // cout<<"("<<start << ","<<end<<") ";
//     for(int i=start; i<=end; i++){
//         cout << arr[i];
//     }
//     cout<<",";
// }
// cout << endl ;
//     }
// }
// int main(){
//     int arr[5]= {1, 2, 3, 4, 5};
//     int n=5;
//     printSubarrays(arr, n);
//     return 0;
// }
// void maxSubarraySum1(int *arr, int n){
//     int maxSum = INT_MIN;
//     for(int start=0; start<n; start++){
//         for(int end=start; end<n; end++){
//             int currSum =0;
//             for(int i=start; i<=end; i++){
//                 currSum +=arr[i];
//             }
//             cout<<currSum<<",";
//             maxSum = max(maxSum, currSum);
//         }
//         cout<<endl;
//     }
//     cout<< "maximum subarray sum = "<<maxSum <<endl;
// }


// int main(){
//     int arr[6]= {2, -3, 6, -5, 4, 2};
//     int n=sizeof(arr)/sizeof(int);
//   maxSubarraySum1(arr, n);



//     return 0;
// }


// void maxProfit(int *prices, int n){
//     int bestBuy[100000];
//     bestBuy[0]=INT_MAX;
//     cout<< bestBuy[0]<<",";
//     for(int i=1; i<n; i++){
//         bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
//         cout<<bestBuy[i]<<",";

//     }
//     cout<<endl;

// }
// int main()
// {
//     int prices[6]= {7,1, 5, 3, 6, 4};
//     int n= sizeof(prices)/ sizeof(int);
//     maxProfit(prices, n);

//     return 0;

// }



// void maxProfit(int *prices, int n){
//     int bestBuy[10000];
//     bestBuy[0]=INT_MAX;
//     for(int i=1; i<n; i++){
//         bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
        
//     }
//     int maxProfit=0;
//     for(int i=0; i<n; i++){
//         int currProfit = prices[i]-bestBuy[i];
//         maxProfit =max(maxProfit, currProfit);
//     }
//     //O(n+n)=O(n). time complexity
//     cout<< "max Profit = "<<maxProfit <<endl;
// }

// int main(){
//     int prices[6]={7, 1, 5, 6, 4};
//     int n =sizeof(prices)/sizeof(int);
//     maxProfit(prices, n);
//     return 0;
// }

// void trap (int *heights, int n){
//     int leftMax[20000];
//     leftMax[0] = INT_MIN;
    
//     for(int i=1; i<=n; i++){
//         leftMax[i]=max(leftMax[i-1], heights[i-1]);
//         cout<<leftMax[i]<<",";

//     }
//     cout<<endl;


    
// }

// int main(){
//     int heights[7]={4, 2, 0, 6, 3, 2, 5};
//     int n= sizeof(heights)/sizeof(int);
// trap(heights, n);
// return 0;
// }

// void trap (int *heights, int n){
//     int leftMax[20000], rightMax[20000];
//     leftMax[0] = heights[0];
//     rightMax[n-1]=heights[n-1];
//     cout<<rightMax[n-1]<<",";
    
//     for(int i=1; i<=n; i++){
//         leftMax[i]=max(leftMax[i-1], heights[i-1]);
        

//     }
//     for(int i=n-2; i>=0; i--){
//         rightMax[i]=max(rightMax[i+1], heights[i+1]);
     
        
//     }
//     int waterTrapped = 0;
//     for(int i=0; i<n; i++){
//         int currWater= min(leftMax[i],rightMax[i]);
//         if(currWater > 0){
//             waterTrapped += currWater;
//         }
//         }
//     cout<<"water trapped = "<< waterTrapped<<endl;
    


    
// }

// int main(){
//     int heights[7]={4, 2, 0, 6, 3, 2, 5};
//     int n= sizeof(heights)/sizeof(int);
// trap(heights, n);
// return 0;
//}

// int factorial(int);
// int main(){
//     int n,f;
//     cin>>n;
//     f=factorial(n);
//     cout<<"the factorial of given no is"<<f;
//     return 0;
// }
// int factorial (int a)
// {
//     if(a==0 || a==1)
//     return 1;
// else
// return(a*factorial(a-1));
// }
// int sum(int arr[5])
// {int result=0;
//     for (int i=0; i<5; i++)
//     result = result + arr[i];
//     return result;
// }



// int sum(int arr[5]){
//     int result =0;
//     for (int i=0; i<5; i++)
//     result =result + arr[i];
// return result;

    
// }

// int main(){
//     int a[5]={10, 20, 50, 40, 50};
//     int total;
//     total=sum(a);
//     cout<<"the sum of array is = "<< total<<endl;
//     return 0;
// }


//     int sum(int arr[],int n ){
//     int max = arr[0];
//     for (int i=1; i<n; i++)
//     {
//         if(arr[i]>max)
//         max = arr[i];
//     }
// return max;

    
// }

// int main(){
//     int a[]={10, 20, 50, 40, 50, 60 ,70};
//     int total;
//     int size =sizeof (a)/sizeof (a[0]);
//     total=sum(a,size);
    
//     cout<<"biggest no. = "<< total<<endl;
//     return 0;
// }


// void bubble sort(int arr[],int n){
//     for(int i=0; i<n-1; i++){
//         for(int j=0;j<n-i-1; ++){
//             if(arr[]>arr[i+1]){
//                 int tem=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// void printArr(int arr[],int n){
//     for(int i=0 i<n; i++)
//     cout<<arr[i]<<" ";
//      cout<<endl;
// }
// int main(){
//     int arr[]={1, 2, 3,4 ,5 ,4,3 ,4 ,3 }
//     int n= sizeof(arr)/sizeof(arr[a]);
//     cout<<"original array";
//     printArr(arr,n);
//     bubbe sort(arr,n);
//     cout<<"sorted array";
//     printArr(arr,n);
//     return 0;
// }

// int main(){
//     char arr[10];
    
//     getline(cin, arr);

//     cout<<arr;

//     return 0;
// }

//implement a progeam inline function ,defaoult argument and function overloading for performing mathematical operator
// class hello{
//     public:
//     int a,b,c;
//     hello(int a,int b,int c){
//         this->a=a;
//         this->b=b;
//         this->c=c;
//     }
//      int calculate(int a,int b){
//         return a-b;
//      }
//      int calculate(int a,int b,int c){
//         return a+b+c;
//      }
    


// };
// int main(){
//     hello a(3,4,5);
//     cout<<a.calculate(5,6)<<'\n';
// //     cout<<a.calculate(3,4,5);
// // }




// int main (){
//     string str= "Tejbahadur";
//     int i=0;
//     int j=str.length()-1;
//     while(i<j){
//         swap(str[i],str[j]);
//         i++;
//         j--;
//     }
//     cout<<"reverse. : "<<str<<endl;
//     return 0;
// }
    

///****pelindrome */
// bool checktopelindrome(char word[]){
//     int i=0;
//     int j=strlen(word)-1;

//     while(i<=j){
//         if(word[i]!=word[j])
//         return false;
//     else{

//         i++;
//         j--;
//     }
//     }
// return true;
// }

// int main(){
//     char arr[]="haa";
//     cout<<"pelindrome: "<< checktopelindrome(arr)<<endl;
//     return 0;

    
// }

// convert lover to uppter
//  void convertlovertouppper(char arr[]){
//     int i=0;
//     int n=strlen(arr);
//     int j=n-1;
     
//     for(int i=0; i<n; i++){
//         if(arr[i]>='a' && arr[i]<='z')

//             arr[i]=arr[i]-'a'+'A';
        
//     }
//  }


//  int main(){
//     char arrr[]="Zamania";
//    convertlovertouppper(arrr);
//    cout<<arrr;
  
//  }


// #define SQUARE(x)((x)*(x))
// // #define SQUARE(x)x*x
// int main(){
//    cout<<SQUARE(5)<<endl;
//     cout<<SQUARE(5+3)<<endl;
//     return 0;

// }


// int main(){
//    int arr[]={10,20,30,40,50};
//    for(int x:arr){
//       cout<<x<<" ";
//    }
//    return 0;
//}


// int main(){
//    vector<int> nums={1,2,3,4,5};
//    for(int x:nums){
//       cout<<x<<" ";
//    }
//    return 0;
//}


// class Player{
//    public:
//    std::string name;
//    void roar(){
//    std::cout<<name<<" shouts!"<<std::endl;
// }
// };
// int main(){
//     Player p1;
//     p1.name="Thor";
//     p1.roar();

//     Player* p2=&p1;
//     p2->name="odim";
//     p2->roar();

// }

// class BankAccount{
//    private:
//    double balance;
//    public:
//    //getter method
//    double getBalance() const {
//       return balance;
//    }
//    //setter method(with validation)
//    void deposit(double amount){
//       if(amount>0) balance += amount;
//    }
// };
// int main(){

// }

// class Rectangle {
//    private:
//    int width;
//    int height;
//    public:
//    Rectangle(int w, int h) : width(w), height(h){}
//    //1. rectangle declaration inside the class 
//    int getArea() const;

// };
// //2. definition outside the class using incline keyword
// inline int Rectangle::getArea() const{
//    return width * height;
// }
// int main(){
//    Rectangle rect(5,20);
//    cout<< "area"<<" "<<rect.getArea()<<endl;
//    return 0;
// }


// class Encapsulation {
//    private:
//    int hiddenData;
//    public:

//    //setter methsos to modify private data
//    void setData(int value){
//       hiddenData =value;
//    }
//    //getterr methor=d to aces private data
//    int getData() const{
//       return hiddenData;
//    }

// };

// int main(){
//    Encapsulation obj;
//    obj.setData(43);
//    cout<<"hidden data "<<obj.getData()<<endl; /// access the value using the public getter 
//    return 0;

// }


class Example{
   public:
   int a;
   void add(Example E){
      a=a+E.a;
   }
};
int main(){
   Example E1, E2;
   E1.a =50;
   E2.a=100;
   cout<<"initial value";
   cout<<"\nValue of object 1:"<<E1.a<<"\n& object 2:"<<E2.a<<"\n\n";

   //passing object as an argument 
   //to functon DD
   E2.add(E1);

   //changed vaalue after passing 
   //object as argument 
    cout <<"New values \n";
    cout<<" value of object 1:"<<E1.a<<"\n& object 2"<<E2.a<<"\n\n";
    return 0;
}