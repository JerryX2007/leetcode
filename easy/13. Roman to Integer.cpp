class Solution {
public:
    int getValue(char s) {
        if (s == 'I') return 1;
        else if (s == 'V') return 5;
        else if (s == 'X') return 10;
        else if (s == 'L') return 50;
        else if (s == 'C') return 100;
        else if (s == 'D') return 500;
        else return 1000;
    }
    int romanToInt(string s) {
        int result = 0;
        int forward = 0;
        int cur = 0;
        for (int i = 0; i < s.length(); i++) {
            cur = getValue(s[i]);
            if (i + 1 < s.length()) {
                forward = getValue(s[i+1]);
            } else forward = 0;
            if (cur >= forward) {
            result += cur;
            } else {
                result -= cur;
            }
        }
        return result;
    }
};