#include <iostream>
using namespace std;

int findDuplicate(int arr[]) {
    
    int slow = arr[0];
    int fast = arr[0];

    
    do {
        slow = arr[slow];      
        fast = arr[arr[fast]];        
    } while (slow != fast);         

 
    slow = arr[0];

    
    while (slow != fast) {
        slow = arr[slow];     
        fast = arr[fast];             
    }

   
    return fast;
}

int main() {

    int arr[] = {4,3,5,2,1,6,2};


    int duplicate = findDuplicate(arr);
    cout << "Duplicate number: " << duplicate << endl;

    return 0;
}
