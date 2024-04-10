class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.size(), m = p.size();
        s = " " + s, p = " " + p;
        
        vector<vector<bool>> f(n + 1, vector<bool>(m + 1, 0));
        f[0][0] = 1;
        for(int i = 0; i <= n; i ++)
        {
            for(int j = 1; j <= m; j ++)
            {
                if(i > 0 && (s[i] == p[j] || p[j] == '.'))
                    f[i][j] = f[i - 1][j - 1];
                if(p[j] == '*')
                {
                    if(j >= 2)
                        f[i][j] = f[i][j - 2];
                    if(i > 0 && (s[i] == p[j - 1] || p[j - 1] == '.'))
                        f[i][j] = f[i][j] | f[i - 1][j];
                }
            }
        }
        return f[n][m];
    }
};