/*
    LeetCode 26 - Remove Duplicates from Sorted Array
    Difficulty: Easy

    Technique:
    Two Pointers

    Approach:
    Since the array is already sorted, duplicates are adjacent.

    Use:
    - slow pointer -> position for the next unique element
    - fast pointer -> scans the entire array

    Whenever nums[fast] is different from nums[slow],
    move slow forward and copy nums[fast].

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.empty())
            return 0;

        int slow = 0;

        for (int fast = 1; fast < nums.size(); fast++) {

            if (nums[fast] != nums[slow]) {
                slow++;
                nums[slow] = nums[fast];
            }
        }

        return slow + 1;
    }
};