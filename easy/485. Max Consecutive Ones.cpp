class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int cur = 0;
        bool flag = false;
        for (int i=0; i < nums.size();i++) {
            if (nums.at(i) == 0) {
                flag = false;
                ans = max(ans, cur);
                cur = 0;
            }
            else {
                flag = true;
            }
            if (flag) {
                cur++;
            }
        }
        ans = max(ans, cur);
        return ans;
    }
};