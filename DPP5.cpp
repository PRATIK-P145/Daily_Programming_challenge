/*Problem : Find the Leaders in an Array
You are given an integer array arr of size n. An element is considered a leader if it is greater than all the elements to its right. Your task is to find all such leader elements in the array.

Input :
An integer array arr of size n.
Example : 
arr = [16, 17, 4, 3, 5, 2]

Output :
Return an array containing all the leader elements in the order in which they appear in the original array.
Example:
Leaders: [17, 5, 2]
*/
#include <iostream>
#include <vector>
using namespace std;

std::vector<int> findleader(int arr[], int len){
    vector<int>leaders;

    int max = arr[len-1];
    leaders.push_back(max);

    int i=len-2;
    while(i>=0){
        if(arr[i]>max){
            leaders.insert(leaders.begin(),arr[i]);
            max = arr[i];
        }
        i--;
    }
  
    return leaders;
}
int main(){
  int arr[] = {16, 17, 4, 3, 5, 2};
  int n = sizeof(arr)/sizeof(arr[0]);

  vector<int>result = findleader(arr,n);

  cout << "Leaders: ";
    for (int leader : result) {
        cout << leader << " ";
    }
    cout << endl;

    return 0;
}
