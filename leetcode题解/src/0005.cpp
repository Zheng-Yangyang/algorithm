class Solution {
public:
    bool dp[1010][1010];
    string longestPalindrome(string s) {
        int n = s.size();
        memset(dp, 0, sizeof dp);
        int length = 0, start = 0;
        for(int len = 1; len <= n; len ++)
        {
            for(int i = 0; i + len - 1 < n; i ++)
            {
                int l = i, r = i + len - 1;
                if(len == 1)    dp[l][r] = true;
                else if(len == 2)   dp[l][r] = s[l] == s[r];
                else    
                    dp[l][r] = dp[l + 1][r - 1] &&(s[r] == s[l]);
                if(dp[l][r] && len >= length)
                {
                    length = len;
                    start = l;
                }
            }
        }
        return s.substr(start, length);
    }
};