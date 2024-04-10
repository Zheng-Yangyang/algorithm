class Solution {
public:
    string convert(string s, int numRows) {
        if(s.size() == 1 || numRows == 1)
            return s;
        vector<string> ans(numRows);
        bool godown = false;
        int cur = 0;
        for(auto c : s)
        {
            ans[cur] += c;
            if(cur == 0 || cur == numRows - 1)
                godown = ! godown;
            cur += godown ? 1 : -1;
        }
        string res;
        for(auto c : ans)
            res += c;
        return res;
    }
};