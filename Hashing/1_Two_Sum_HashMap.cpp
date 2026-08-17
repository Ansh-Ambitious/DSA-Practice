/*
    LeetCode 1 - Two Sum
    Difficulty: Easy

    Technique:
    Hash Map

    Approach:
    Store each number and its index in an unordered_map.
    For every element, calculate the complement:
        complement = target - nums[i]

    If the complement already exists in the map,
    we have found the required pair.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};