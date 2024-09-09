/* Day 1 of 30 🗓

Problem: Sort an Array of 0s, 1s, and 2s
You are given an array arr consisting only of 0s, 1s, and 2s. The task is to sort the array in increasing order in linear time (i.e., O(n)) without using any extra space. This means you need to rearrange the array in-place.

Input :
An integer array arr of size n where each element is either 0, 1, or 2.
Example : arr = [0, 1, 2, 1, 0, 2, 1, 0]

Output :
The sorted array, arranged in increasing order of 0s, 1s, and 2s.
Example: [0, 0, 0, 1, 1, 1, 2, 2]
*/

#include <iostream>
using namespace std;

void swp(int &a, int &b){  //call by reference
    int temp = a;
    a = b;
    b = temp;
}

void dnfsort(int arr[],int n){

     int low=0,mid=0;
     int high = n-1;
     
     while(mid<=high){
        if(arr[mid]==0){
            swp(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swp(arr[mid],arr[high]);
            mid++;
            high--;
        }
     }
}


int main(){
   int arr[] = {2,2,2,1,1,1,0,0};

   int n = sizeof(arr)/sizeof(arr[0]);

   cout<<"Array Before sorting :"<<endl;
   for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
   }
   cout<<endl;
 
   dnfsort(arr,n);

   cout<<"Array After sorting :"<<endl;
   for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
   }
   cout<<endl;

    return 0;
}
