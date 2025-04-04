class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         unordered_set<int> num_set(nums.begin(), nums.end());
    int longest = 0;

    for (int num : num_set) {
        // Only start counting if it's the beginning of a sequence
        if (num_set.find(num - 1) == num_set.end()) {
            int currentNum = num;
            int streak = 1;

            while (num_set.find(currentNum + 1) != num_set.end()) {
                currentNum++;
                streak++;
            }

            longest = max(longest, streak);
        }
    }

    return longest;
        
    }
};
