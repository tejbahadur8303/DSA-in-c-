   #include<iostream>
    using namespace std;

   
   
   
   
   //  1. while loop
   
   
//    int main(){

//    int i=1 ,fact=1 ,n ;
//    cin >> n ;
//    while (i <=n){
//       fact=fact*i;
//    i++;
//    }
//    cout << fact << endl;
//    return 0; 
// }


//. 2 for loop



//. 3  while loop
   // int main (){
   
   // int n, sum=0 ,a;
   // cin>>n;
   // while(n>0){
   //    a=n%10;               // *** jb bhi bdi value se chhoti value ki vor jana ho to hmesa while loop prefer krenge
   //    sum=sum+a;
   //    n=n/10;
   // }
   // cout<<sum<<endl;
   // return 0;
   // }




   // 4. for loop


   // int main (){
   //    int n, rev=0, a, m;
   //    cin>>n;
   //    m=n;
   //    while(n>0){
   //       a=n%10;               
   //       rev=rev*10 + a;
   //       n=n/10;
   //    }if(rev==m){
   //       cout<<" palidrome no."<<endl;
   //    }else{
   //       cout<<" not pelidrome"<<endl;
   //    }
   //    return 0;
      
   //    }

   //5 for loop
   

   // int main(){
   //    int n, rev=0, a ,m;
   //    cin>>n;
   //    m=n;
   //    while(n>0){
   //       a=n%10;               
   //       rev=rev*10 + a;
   //       n=n/10;
   //    }
   //    if(rev==m){
   //       cout<<"palindrome"<<endl;
   //    }
   //    else{
   //       cout<<"not palindrome"<<endl;
   //    }
      
   //    return 0;
   // }
   



//. 6 for loop


   // int main(){
   //    int n, sum=0, a, m;
   //    cin>>n;
   //    m=n;
   //    while(n>0){
   //       a=n%10;               
   //       sum=sum + a*a*a;
   //       n=n/10;
   //    }
   //    if(sum==m){
   //       cout<<"armstrong"<<endl;
   //    }
   //    else{
   //       cout<<"not armstrong"<<endl;
   //    }
   //    return 0;
   // }


   // int main(){
   //    int n, a;
   //    int digitsum=0;
   //    cin>>n;
   //    while(n>0){
   //       a=n%10;
   //       if(a%2==0){

   //          digitsum=digitsum +a;
   //       }
   //       n = n/10;

   //    }
   //    cout<<" sum = "<<digitsum<<endl;
   //    return 0;
      
   //  }


   // int main(){
   //    int n; 
   //    int rev=0;
   //    int a;
   //    cin>> n;
   //    while(n>0){
   //       a=n%10;
   //       rev= rev*10 + a;
   //       n=n/10;
   //    }
   //    cout<<" rev ="<<rev<<endl;
   //    return 0;
   // }



// int main(){
//    int n;
   
//    do{
//       cout<<" enter your no :";
//       cin>>n;
//       if(n%10 == 0){
//          break;
//       }
//       cout << " you entered "<< n << endl;
//    }while(true);
// return 0;
   
// }

 ///prime number 
// int main(){
//    int n;
//    cin>>n;
//    bool isPrime = true;
//    for( int i=2; i<=n-1; i++){
//      if(n % i == 0 ) {
//       isPrime = false;
//       break;
//      }
//    }
//    if(isPrime == true ){
//       cout<< " number is prime "<< endl;

//    }else{
//       cout<<" number is not prime "<< endl;
//    }
//    return 0;
   
// }
      


// int main(){
//    int n;
//    cin>>n;
//    bool isPrime = true;
//    for( int i=2; i<=sqrt(n); i++){
//      if(n % i == 0 ) {
//       isPrime = false;
//       break;
//      }
//    }
//    if(isPrime == true ){
//       cout<< " number is prime "<< endl;

//    }else{
//       cout<<" number is not prime "<< endl;
//    }
//    return 0;
   
// }
      // int main(){
      //    int n;
      //     int fact = 1;
      //     cin>>n;
      //     for (int i=1; i<=n; i++){
      //       fact = fact*i;

      //    }
      //    cout<<fact<<endl;
      //     return 0;
      // }

      // int main(){
      //     int n;
      //     cin>>n;
      //     for(int i=1; i<=10; i++){
      //       cout<<n*i<<endl;
      //     }
      //     return 0;
      // }
      
      // int main(){
      //    int n,a,m;
      //    int rev =0;
      //    cin>>n;
      //    m=n;
      //    while(n>0){
      //       a=n%10;
      //       rev= rev*10 + a;
      //       n = n/10;
      //    }if(rev == m){
      //       cout<<" no. is pellindrime "<<endl;

      //    }else{
      //       cout<<" not pelindron"<< endl;
      //    }
      //    return 0;
      // }

      // int main( ){
      //    int n;
      //    bool isPrime= true;
      //    cin>>n;
      //    for(int i=2;  i<=(n-1); i++){
      //       if(n%i == 0){
      //          isPrime = false;
      //       }
      //    }if(isPrime == true){
      //       cout<<" prime no"<<endl;

      //    }else{
      //       cout<<" not prime "<<endl;
      //    }
      //    return 0;

      // }

//       int main(){
//     int size, i, fo=0, f1=1, f2;
//     cin>>size;
//     int a[size];
//     cout<<" The fibonacci series. "<<fo<<f1;
//     for (i=1; i<=size - 2; i++){
//         f2= fo+f1;
//         cout <<f2<<" ";
//         fo=f1;
//         f1=f2;


    
//     }
//     cout<<endl;
//     return 0;
// }

         


// int main(){
//    int n, a;
//    int cubeSum = 0;
//    cin>>n;
//    while (n>0){
//       a= n%10;
//       cubeSum = cubeSum + a*a*a;
//       n=n/10;
//    }
//    cout<<" cubeSum is"<<cubeSum<<endl;
//    return 0;
// }

// int main(){
//    int n;
//    cin>>n;
//    for( int i=1; i<=n; i++){
//       for(int j=1; j<=(n-i+1); j++){
//          cout<<" * "<<" ";
//       }
//       cout<<endl;
//    }
//    return 0;
// }

// int main(){
//    int n;
//    cin>>n;
//    for (int i=1; i<=n; i++){
//       for(int j=1; j<=i; j++){
//       cout<<j;
//    }
//    cout<<endl;
// }
//    return 0;
// }


// int main(){
//    int n;
//    char ch ='A';
//    cin>>n;
//    for (int i=1; i<=n; i++){
//       for(int j=1; j<=i; j++){
//       cout<<ch;
//       ch++;
//    }
//    cout<<endl;
// }
//    return 0;
// }



// holow rectangle
// int main(){
//    int n=4;
//    for ( int i=1; i<=n; i++){
//       cout<<"*";
//       for(int j=1; j<=n-1; j++){
//          if(i==1 || i == n){
//             cout<<"*";
//          }else{
//             cout<< " ";
//          }
//       }
//       cout<<"*"<<endl;;
//    }
//    return 0;
// }


// int main(){
//    int n;
//    cin>>n;
//    for(int i=1; i<=10; i++){
//       cout<<n*i<<endl;
//    }
//    return 0;
// }


int main(){
   int sum=0;
   int a,n,m;
   cin>>n;
   m=n;
   int digit = 0,x=n;
   while(x>0){
      digit++;
      x/=10;
   }
   while(n>0){
      a=n%10;
      sum = sum + pow(a,digit);
      n=n/10;
   }
   if(sum==m){
      cout<<" no is armstrong "<<endl;

   }else{
      cout<<"not armstrong "<<endl;
   }
   return 0;
}