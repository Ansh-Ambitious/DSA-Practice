/*
    LeetCode 27 - Remove Element
    Difficulty: Easy

    Technique:
    Two Pointers

    Approach:
    Use one pointer to scan the array and another pointer
    to store elements that are not equal to val.

    Whenever nums[i] != val, place nums[i] at nums[k]
    and increase k.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {

        int k = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};