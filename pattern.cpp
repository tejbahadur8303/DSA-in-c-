/// PATTERN. 



#include<iostream>
using namespace std;
int main()




///.   1


// {
//    int n;
//    cin>>n;
//    for(int i=1;  i<=n; i++){
//       for(int j=1; j<=n; j++){
//          cout<<j;
//       }
//       cout<< endl;
      
//    }
//    return 0;
// }



// {
// int n;
// cin>>n; 
// for (int i=1; i<=n; i++){
//    for(int j=1; j<=i; j++){
//       cout<<j;
//    }
//    cout<<endl;
// }
// return 0;
// }



////. character
// {
// int n ;
// cin>>n; 
// for (int i=1; i<=n; i++){
//    char ch ='A';

//    for(int j=1; j<=i;  j++){
//       cout << ch;
//       ch=ch + 1;
//    }
//    cout<<endl;
// }
// return 0;
// }




// {
//    int n;
//    char ch='A' ;
//    cin>>n;

//    for(int i=1; i<=n; i++){
//       for(int j=1; j<=n; j++){
//          cout<<ch;
//          ch=ch + 1;
//       }
//       cout<<endl;
//    }
// return 0;
// }



// {
//    int n;
//    cin>>n;
//    for(int i=1; i<=n; i++){
//       for(int j=1; j<=i+1; j++){
//          cout<<(i+1);
         
//       }
//       cout<<endl;
//    }
//    return 0;
// }



// {int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for (int j=1; j<=i+1; j++){
//             cout<< j<< " ";
//         }
//         cout<<endl;
//     }
// return 0;

// }

// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=i+1; j>0; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }
 

///.   INVERTED TRIANGLE PATTERN
// {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" "; }
//             for (int j=0; j<n-i; j++){
//                 cout<<(i+1)<<" ";
//             }
       
//         cout<<endl;
//     }
 
//     return 0;
// }

///// not clear  -- should be revise
// {
//     int  n;
//     cin>>n;
//     for( int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";

//         }
//         for (int j=1; j<=i+1; j++){
//          cout<< j;
//         }
//         for ( int j=1; j>0; j--){
//             cout<< j;
//         }
//         cout<<endl;
//     }

//     return 0;
// }




//// HOLLOW  DIAMOND pattern


//.  function 

// {
// int n=4;

// for(int i=1; i<=n; i++){
//     //space
//     for(int j=1; j<=n-i; j++){
//         cout<<"";
//     }
//     for(int j=1; j<=i; j++){
//         cout<<"*";
//     }
//     cout << endl;
// }
// return 0;
// }


// {
// int n=5;
// int num=1;
// for(int i=1; i<=n; i++){
//     //space
//     for(int j=1; j<=i; j++){
//         cout<<num++ << " ";
//     }
    
    
//     cout << endl;
// }
// return 0;
// }


//Print diamond

// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//             for(int j=1; j<=2*i-1; j++){
//                 cout<<"*";
//             }
//             cout<<endl;   


//         }

//             for(int i=n; i>=1; i--){
//                 for(int j=1; j<=n-i; j++){
//                     cout<< " ";
//                 }
//                 for ( int j=1; j<=2*i-1; j++){
//                     cout<<"*";
//                 }
//                 cout<<endl;
//             }
//             return 0;
//             }
        
    // print butterfly
//         {
//             int n;
//             cin>>n;
//             for(int i=1; i<=n; i++){
//                 for(int j=1; j<=i; j++){
//                     cout<<"*";
//                 }
//                 for(int j=1; j<=2*n-2*i; j++){
//                     cout<<" ";
//                 }
//                 for(int j=1; j<=i; j++){
//                     cout<<"*";
//                 }
//                 cout<<endl;
//             }


// for(int i=n; i>=1; i--){
//                 for(int j=1; j<=i; j++){
//                     cout<<"*";
//                 }
//                 for(int j=1; j<=2*n-2*i; j++){
//                     cout<<" ";
//                 }
//                 for(int j=1; j<=i; j++){
//                     cout<<"*";
//                 }
//                 cout<<endl;
//             }



            
//             return 0;
//         }
