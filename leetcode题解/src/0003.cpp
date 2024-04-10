class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> cnt;
        int n = s.size();
        int j = 0, ans = 0;
        for(int i = 0; i < n; i ++)
        {
            cnt[s[i]] ++;
            while(cnt[s[i]] > 1)
            {
                if(-- cnt[s[j]] == 0)
                    cnt.erase(s[j]);
                j ++;
            }
            ans = max(ans, i - j + 1);
        }
        return ans;
    }
};