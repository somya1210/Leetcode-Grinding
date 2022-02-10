class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int>s;
        //s.push(ast[0]);
        int n=ast.size(),top;
            for(int i = 0; i < n; i++) {
            if(ast[i] > 0 || s.empty()) {
                s.push(ast[i]);
            }
            else {
                while(!s.empty() and s.top() > 0 and s.top() < abs(ast[i])) {
                    s.pop(); 
                    //
                }
                if(!s.empty() and s.top() == abs(ast[i])) {
                    s.pop();
                }
                else {
                    if(s.empty() || s.top() < 0) {
                        s.push(ast[i]);
                    }
                }
            }
        }
        
       
        
        vector<int>ans;
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
         reverse(ans.begin(),ans.end());
        return ans;
    }
};