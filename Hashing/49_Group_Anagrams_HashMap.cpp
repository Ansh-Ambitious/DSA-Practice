/*
    LeetCode 49 - Group Anagrams
    Difficulty: Medium

    Technique:
    Hash Map + Sorting

    Approach:
    Anagrams contain the same characters with the same
    frequencies.

    Sort every string.
    Anagrams will produce the same sorted string.

    Use the sorted string as the key in an unordered_map.

    Example:
        "eat" -> "aet"
        "tea" -> "aet"
        "ate" -> "aet"

    Time Complexity: O(n * k log k)
        n = number of strings
        k = maximum string length

    Space Complexity: O(n * k)
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(
        vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for (string str : strs) {

            string key = str;

            sort(key.begin(), key.end());

            mp[key].push_back(str);
        }

        vector<vector<string>> ans;

        for (auto& pair : mp) {
            ans.push_back(pair.second);
        }

        return ans;
    }
};