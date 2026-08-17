/*
    LeetCode 11 - Container With Most Water
    Difficulty: Medium

    Technique:
    Two Pointers

    Approach:
    Start with one pointer at the beginning and one at the end.

    Area:
        width * minimum(height[left], height[right])

    The pointer with the smaller height is moved inward
    because moving the taller pointer cannot increase the
    limiting height.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int maxWater = 0;

        while (left < right) {

            int width = right - left;

            int currentHeight =
                min(height[left], height[right]);

            int currentArea = width * currentHeight;

            maxWater = max(maxWater, currentArea);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return maxWater;
    }
};