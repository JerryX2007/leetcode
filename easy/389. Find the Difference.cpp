class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> letters(26, 0);
        char ans;
        for (int i = 0; i < s.length(); i++){
            letters[s[i]-97]++;
        }
        for (int i = 0; i < t.length(); i++) {
            if (letters[t[i]-97] == 0) ans = t[i];
            else {
                letters[t[i]-97]--;
            }
        }
        return ans;
    }
};