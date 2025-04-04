class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count(26, 0);  // count of each character

    // First pass: count frequency of each character
    for (char c : s) {
        count[c - 'a']++;
    }

    // Second pass: find the first character with frequency 1
    for (int i = 0; i < s.length(); ++i) {
        if (count[s[i] - 'a'] == 1) {
            return i;
        }
    }

    return -1;
        
    }
};
