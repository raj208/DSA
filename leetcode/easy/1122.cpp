#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> count;
        for (int num : arr1) {
            count[num]++;
        }

        // Print the unordered_map
        // cout << "Count map:" << endl;
        // for (const auto& pair : count) {
        //     cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
        // }

        vector<int> result;
        for (int num : arr2) {
            if (count.find(num) != count.end()) {
                for (int i = 0; i < count[num]; ++i) {
                    result.push_back(num);
                }
                count.erase(num);
            }
        }

        vector<int> remaining;
        for (const auto& entry : count) {
            for (int i = 0; i < entry.second; ++i) {
                remaining.push_back(entry.first);
            }
        }

        sort(remaining.begin(), remaining.end());
        result.insert(result.end(), remaining.begin(), remaining.end());

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> arr1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    vector<int> arr2 = {2, 1, 4, 3, 9, 6};
    
    vector<int> result = sol.relativeSortArray(arr1, arr2);

    cout << "Sorted array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

//easy method
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> result;
     
        for (int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < arr1.size(); j++) {   
                if (arr1[j] == arr2[i]) {
                    result.push_back(arr1[j]);
                    arr1[j] = -1;
                }
            }
        }
        sort(arr1.begin(), arr1.end());

        for (int i = 0; i < arr1.size(); i++) {
            if (arr1[i] != -1) {
                result.push_back(arr1[i]);
            }
        }
        return result;
    }
};