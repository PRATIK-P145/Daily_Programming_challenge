/*You are given two sorted arrays arr1 of size m and arr2 of size n. Your task is to merge these two arrays into a single sorted array without using any extra space (i.e., in-place merging). The elements in arr1 should be merged first, followed by the elements of arr2, resulting in both arrays being sorted after the merge.

Input:
Two sorted integer arrays arr1 of size m and arr2 of size n.
Example : 
arr1 = [1, 3, 5, 7]
arr2 = [2, 4, 6, 8]

Output:
Both arr1 and arr2 should be sorted after the merge. Since you cannot use extra space, the final result will be reflected in arr1 and arr2.
Example:
arr1 = [1, 2, 3, 4]
arr2 = [5, 6, 7, 8]*/

#include <iostream>
using namespace std;

void merge(int a[],int b[],int m, int n);
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    merge(arr1,arr2,m,n);

    cout << "Arr1 after merging: ";
    printArray(arr1, m);

    cout << "Arr2 after merging: ";
    printArray(arr2, n);

    return 0;
}
void merge(int arr1[], int arr2[], int m, int n) {
    int i = 0;  
    int j = 0;  

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            i++;
        } else {
           
            swap(arr1[i], arr2[j]);
     
            int first = arr2[j];
            int k;
            for (k = 1; k < n && arr2[k] < first; k++) {
                arr2[k - 1] = arr2[k];
            }
            arr2[k - 1] = first;
        }
    }
}
