class Solution {
public:
    string convert(string s, int numRows) {
     if (numRows == 1)
            return s;
        vector<vector<char>> ans(numRows);
        bool up;
        int j = 0;
        for (char i: s) {
            ans[j].push_back(i);
            if (j == numRows - 1)
                up = true;
            else if (j == 0)
                up = false;
            (up) ? j-- : j++;
        }
        string res = "";
        for (auto i: ans)
            for (auto j: i)
                res += j;      
        return res;   
    }
};