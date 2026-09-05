#include <iostream>
using namespace std;

void merge(int *arr, int s, int e) {

    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Create temporary arrays
    int *left = new int[len1];
    int *right = new int[len2];

    // Copy left part
    int k = s;

    for(int i = 0; i < len1; i++) {
        left[i] = arr[k];
        k++;
    }

    // Copy right part
    k = mid + 1;

    for(int i = 0; i < len2; i++) {
        right[i] = arr[k];
        k++;
    }

    // Merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex < len1 && rightIndex < len2) {

        if(left[leftIndex] < right[rightIndex]) {
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    // Copy remaining left elements
    while(leftIndex < len1) {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    // Copy remaining right elements
    while(rightIndex < len2) {
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    delete[] left;
    delete[] right;
}


void mergeSort(int *arr, int s, int e) {

    // Base case
    if(s >= e)
        return;

    int mid = (s + e) / 2;

    // Sort left part
    mergeSort(arr, s, mid);

    // Sort right part
    mergeSort(arr, mid + 1, e);

    // Merge both sorted parts
    merge(arr, s, e);
}


int main() {

    int arr[] = {2, 7, 2, 6, 4, 3, 6, 8};

    int n = 8;

    int s = 0;
    int e = n - 1;

    mergeSort(arr, s, e);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}