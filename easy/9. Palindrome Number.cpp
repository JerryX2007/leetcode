class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        if (x < 0) return false;
        int reversed = 0;
        while (temp != 0) {
            if (reversed > (pow(2, 31)-1)/10) {
                return false;
            }
            reversed = 10 * reversed + (temp%10);
            temp /= 10;
        }
        return (reversed - x) == 0;
    }
};