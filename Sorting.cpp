
#include <iostream>

using namespace std;


///RADIX SORT 

// int main() {
//     int n;
//     cout<<"Enter the size of array:";
//     cin >> n;

//     int A[n], b[n];

//     for(int i = 0; i < n; i++) {
//         cin >> A[i];
//     }

//     // Find maximum element
//     int max = A[0];
//     for(int i = 1; i < n; i++) {
//         if(A[i] > max)
//             max = A[i];
//     }

//     int c[10];  // for digits 0–9

//     // Radix Sort
//     for(int exp = 1; max/exp > 0; exp *= 10) {

//         // Step 1: initialize count array
//         for(int i = 0; i < 10; i++)
//             c[i] = 0;

//         for(int j = 0; j < n; j++) {
//             int digit = (A[j] / exp) % 10;
//             c[digit]++;
//         }
//         for(int i = 1; i < 10; i++) {
//             c[i] = c[i] + c[i-1];
//         }

       
//         for(int j = n-1; j >= 0; j--) {
//             int digit = (A[j] / exp) % 10;
//             b[c[digit] - 1] = A[j];
//             c[digit]--;
//         }

        
//         for(int i = 0; i < n; i++) {
//             A[i] = b[i];
//         }
//     }


//     for(int i = 0; i < n; i++) {
//         cout << A[i] << " ";
//     }

//     return 0;
// }




// int main(){
//     int n;
//     cout<<"Enter the size of array :";
//     cin>>n;

//     int a[n],b[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     int max =a[0];
//     for(int i=0; i<n; i++){
//         if(a[i]>max)
//          max= a[i];
//     }

//     int c[10];
//     //radix sort
//     for(int exp =1;( max/exp)>0; exp *=10){
//         for(int i=0; i<10; i++){
//             c[i]=0;
//         }
//         for(int j=0; j<n; j++){
//             int digit = (a[j]/exp)%10;
//             c[digit] ++;
//         }
//         for(int i=1; i<10; i++){
//             c[i]=c[i]+c[i-1];
//         }
//         for(int j=n; j>=1; j--){
//             int digit =(a[j]/exp)%10;
//             b[c[digit]-1]=a[j];
//             c[digit]--;
//         }
//         for(int i=0; i<n; i++){
//             a[i]=b[i];
//         }
        
//     }
    
//     for(int i=0; i<n; i++){
//         cout<<b[i]<<" ";

//     }
//     return 0;
// }



///*******&   BUCKET SORT */


// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     float a[n];

//     // Input
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     // Create buckets
//     vector<float> bucket[n];

//     // Put elements into buckets
//     for(int i = 0; i < n; i++) {
//         int index = n * a[i];   // bucket index
//         bucket[index].push_back(a[i]);
//     }

//     // Sort each bucket
//     for(int i = 0; i < n; i++) {
//         sort(bucket[i].begin(), bucket[i].end());
//     }

//     // Merge buckets
//     int k = 0;
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < bucket[i].size(); j++) {
//             a[k++] = bucket[i][j];
//         }
//     }

//     // Print sorted array
//     cout << "Sorted array: ";
//     for(int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }

//     return 0;
// }








#include <iostream>
#include <vector>
#include <algorithm> // for sort()
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    float a[n];

    // Input
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Create buckets
    vector<float> bucket[n];

    // Put elements into buckets
    for(int i = 0; i < n; i++) {
        int index = n * a[i];   // bucket index
        bucket[index].push_back(a[i]);
    }

    // Sort each bucket
    for(int i = 0; i < n; i++) {
        sort(bucket[i].begin(), bucket[i].end());
    }

    // Merge buckets
    int k = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < bucket[i].size(); j++) {
            a[k++] = bucket[i][j];
        }
    }

    // Print sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}