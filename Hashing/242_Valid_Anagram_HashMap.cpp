/*
    LeetCode 242 - Valid Anagram
    Difficulty: Easy

    Technique:
    Hash Map / Frequency Counting

    Approach:
    Count the frequency of every character in the first
    string.

    Decrease the frequency while processing the second string.

    If all frequencies become zero, the strings are anagrams.

    Time Complexity: O(n)
    Space Complexity: O(1)
    Since the character set is limited.
*/

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size())
            return false;

        vector<int> freq(26, 0);

        for (char c : s)
            freq[c - 'a']++;

        for (char c : t)
            freq[c - 'a']--;

        for (int count : freq) {
            if (count != 0)
                return false;
        }

        return true;
    }
};