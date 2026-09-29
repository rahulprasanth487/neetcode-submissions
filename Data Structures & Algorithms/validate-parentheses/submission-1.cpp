class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>mp = {
           { '{','}'},
           { '[',']'},
           { '(',')'},
        };

        stack<char> stk;

        for (auto c:s){
            if(stk.empty()){stk.push(c); continue;}
            
            char top = stk.top();
            
            if(c == mp[top]){
                stk.pop();
            }else
            {
                stk.push(c);
            }
        }


        return stk.empty();
    }
};
