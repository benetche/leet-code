#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;

        for(int i = 0; i < nums.size(); i++){
            if(hashMap.find(target - nums[i]) != hashMap.end()){
                return { hashMap[target - nums[i]], i};
            }
            hashMap[nums[i]] = i;
        }
        return {};
    }
};

void printVector(const vector<int>& vec) {
    if (vec.empty()) {
        cout << "No solution found." << endl;
    } else {
        cout << "[" << vec[0] << ", " << vec[1] << "]" << endl;
    }
}

int main() {
    Solution solution;
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = solution.twoSum(nums1, target1);
    printVector(result1);  // Expected output: [0, 1]

    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> result2 = solution.twoSum(nums2, target2);
    printVector(result2);  // Expected output: [1, 2]

    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = solution.twoSum(nums3, target3);
    printVector(result3);  // Expected output: [0, 1]

    return 0;
}