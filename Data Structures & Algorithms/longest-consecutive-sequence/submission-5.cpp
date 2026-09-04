class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int max_streak = 0;

        for (int num : numSet) {
            // Check if num is the start of a consecutive sequence
            if (!numSet.count(num - 1)) {
                int current_num = num;
                int current_streak = 1;

                while (numSet.count(current_num + 1)) {
                    current_num++;
                    current_streak++;
                }

                max_streak = max(max_streak, current_streak);
            }
        }

        return max_streak;
    }
};
