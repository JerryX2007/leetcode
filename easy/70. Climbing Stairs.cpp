class Solution {
public:
    int climbStairs(int n) {
        vector<int> psa;
        psa.push_back(1);
        psa.push_back(2);
        if (n < 3) {
            return psa[n-1];
        }
        for (int i = 2; i < n; i++) {
            psa.push_back(psa[i-1] + psa[i-2]);
        }
        return psa[n-1];
    }
};