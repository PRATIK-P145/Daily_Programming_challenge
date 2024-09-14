#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<pair<int, int>> findZeroSumSubarrays(vector<int>& arr) {
  
    unordered_map<int, vector<int>> sum_map;
    vector<pair<int, int>> result;
    int cumulative_sum = 0;
    

    for (int i = 0; i < arr.size(); i++) {
        cumulative_sum += arr[i];
        
        if (cumulative_sum == 0) {
            result.push_back({0, i});
        }
        
        if (sum_map.find(cumulative_sum) != sum_map.end()) {
            for (int start_index : sum_map[cumulative_sum]) {
                result.push_back({start_index + 1, i});
            }
        }
        
        sum_map[cumulative_sum].push_back(i);
    }
    
    return result;
}

int main() {
    vector<int> arr = {1, 2, -3, 3, -1, 2};
    vector<pair<int, int>> output = findZeroSumSubarrays(arr);
    
    for (auto& p : output) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }
    
    return 0;
}
