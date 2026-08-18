/*
    LeetCode 167 - Two Sum II
    Difficulty: Medium

    Technique:
    Two Pointers

    Approach:
    The array is sorted.

    Start:
        left = 0
        right = n - 1

    If the current sum is:
        target -> answer found
        smaller -> move left forward
        larger  -> move right backward

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {

            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1};
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {};
    }
};