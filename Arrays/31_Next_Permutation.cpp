/*
    LeetCode 31 - Next Permutation
    Difficulty: Medium

    Technique:
    Array Manipulation + Greedy

    Approach:
    1. Find the first decreasing element from the right.
    2. Find the smallest element greater than it from the right.
    3. Swap them.
    4. Reverse the remaining suffix.

    Example:
    1 2 3
        ↓
    1 3 2

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();

        // Step 1: Find the first decreasing element
        int i = n - 2;

        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        // If a decreasing element exists
        if (i >= 0) {

            // Step 2: Find the next greater element
            int j = n - 1;

            while (j >= 0 && nums[j] <= nums[i]) {
                j--;
            }

            // Step 3: Swap
            swap(nums[i], nums[j]);
        }

        // Step 4: Reverse the suffix
        reverse(nums.begin() + i + 1, nums.end());
    }
};