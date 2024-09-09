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
