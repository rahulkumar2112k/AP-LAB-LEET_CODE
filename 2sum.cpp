/**Two Sum (question no 1 on leet code)

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].**/



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); i++) {
            indexedNums.push_back({nums[i], i}); 
        }

        sort(indexedNums.begin(), indexedNums.end());

        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int sum = indexedNums[left].first + indexedNums[right].first;

            if (sum == target) {
                
                return {indexedNums[left].second, indexedNums[right].second};
            } else if (sum < target) {
                left++; 
            } else {
                right--; 
            }
        }
        return {}; 
    }
};
