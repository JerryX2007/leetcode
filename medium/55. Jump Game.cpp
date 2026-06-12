class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);
        if (nums.size()==1) return true;
        dp[0] = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (dp[i] != 0) {
                for (int j = 0; j < nums[i]; j++) {
                    dp[i+j+1]++;
                    if (i + j + 2== nums.size()) return true;
                }
            }
        }
        return dp[nums.size()-1] != 0;
    }
};