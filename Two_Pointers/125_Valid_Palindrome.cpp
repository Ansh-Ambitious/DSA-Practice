/*
    LeetCode 125 - Valid Palindrome
    Difficulty: Easy

    Technique:
    Two Pointers

    Approach:
    Use two pointers:
        left  -> beginning
        right -> end

    Ignore characters that are not alphanumeric.

    Compare characters after converting them to lowercase.

    If any pair is different, the string is not a palindrome.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            while (left < right &&
                   !isalnum(s[left])) {
                left++;
            }

            while (left < right &&
                   !isalnum(s[right])) {
                right--;
            }

            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};