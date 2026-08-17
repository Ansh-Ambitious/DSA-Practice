/*
    LeetCode 15 - 3Sum
    Difficulty: Medium

    Technique:
    Sorting + Two Pointers

    Approach:
    1. Sort the array.
    2. Fix one element using index i.
    3. Use two pointers:
           left = i + 1
           right = n - 1
    4. Calculate the sum of the three elements.
    5. Move pointers depending on the sum.
    6. Skip duplicates to avoid duplicate triplets.

    Time Complexity: O(n^2)
    Space Complexity: O(1) excluding output
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {

            // Skip duplicate first elements
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {

                long long sum =
                    (long long)nums[i] +
                    nums[left] +
                    nums[right];

                if (sum == 0) {

                    ans.push_back({
                        nums[i],
                        nums[left],
                        nums[right]
                    });

                    left++;
                    right--;

                    // Skip duplicates
                    while (left < right &&
                           nums[left] == nums[left - 1])
                        left++;

                    while (left < right &&
                           nums[right] == nums[right + 1])
                        right--;

                }
                else if (sum < 0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return ans;
    }
};