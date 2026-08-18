/*
    LeetCode 33 - Search in Rotated Sorted Array
    Difficulty: Medium

    Technique:
    Binary Search

    Approach:
    At every step, one half of the array is guaranteed
    to be sorted.

    Check which half is sorted.

    If the target lies inside the sorted half,
    search there.

    Otherwise, search the other half.

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
                return mid;

            // Left half is sorted
            if (nums[left] <= nums[mid]) {

                if (nums[left] <= target &&
                    target < nums[mid]) {

                    right = mid - 1;

                } else {

                    left = mid + 1;
                }
            }

            // Right half is sorted
            else {

                if (nums[mid] < target &&
                    target <= nums[right]) {

                    left = mid + 1;

                } else {

                    right = mid - 1;
                }
            }
        }

        return -1;
    }
};