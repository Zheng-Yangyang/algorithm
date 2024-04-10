class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int y = x;
        long long res = 0;
        while(x)
        {
            res = res * 10 + x % 10;
            x /= 10;
        }
        return res == y;
    }
};