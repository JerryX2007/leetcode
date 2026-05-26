class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
        while (x != 0) {
            if ((reversed > ((pow(2, 31) - 1) / 10)) || (reversed < -(pow(2, 31) / 10))) {
                return 0;
            }
            reversed = reversed * 10 + (x % 10);
            x /= 10;
        }
        return reversed;
    }
};