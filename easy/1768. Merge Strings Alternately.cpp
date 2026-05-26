class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l = 0;
        int r = 0;
        string result = "";
        while (l < word1.length() || r < word2.length()) {
            if (l < word1.length()) {
                result += word1[l];
                l++;
            }
            if (r < word2.length()) {
                result += word2[r];
                r++;
            }
        }
        return result;
    }
};