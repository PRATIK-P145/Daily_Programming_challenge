/* You are given an array arr containing n-1 distinct integers. The array consists of integers taken from the range 1 to n, meaning one integer is missing from this sequence. Your task is to find the missing integer.

Input:
An integer array arr of size n-1 where the elements are distinct and taken from the range 1 to n.
Example : arr = [1, 2, 4, 5]

Output:
Return the missing integer from the array.
Example: Missing number: 3

Constraints:
 -The array contains exactly n-1 distinct integers, and all integers are in the range [1, n].
 -You must solve the problem with a time complexity of O(n).
 -The space complexity should be O(1) (constant space) */

# include <iostream>
using namespace std;
int missing(int arr[], int len);
//int sortedmissing(int arr[], int len);

int main(){
   int arr[] = {2,5,1,3,6};

   int len = sizeof(arr)/sizeof(arr[0]);

   cout<<"Missing Number : "<<missing(arr,len);

    return 0;
}

int missing (int arr[], int len){
    int n = len+1;
    int actualsum = 0;
    int expectedsum = n*(n+1)/2;

    for(int i=0; i<len; i++){
        actualsum += arr[i];
    }

    return expectedsum - actualsum;
}

// int sortedmissing(int arr[],int len){   //this function will only work if given array is sorted
//     if(arr[0]!=1)
//        return 1;

//     else{

//          for(int i=0; i<len-1; i++){
//              if(arr[i+1]!=(arr[i]+1))
//                 return arr[i]+1;
//          }
//     }
//    return arr[len-1]+1;
// }