class Solution {
public:

    int evalRPN(vector<string>& tokens) {
        int ans=0;
        stack<int>stk;

        for (int i=0;i<tokens.size();++i){
            if (stk.empty()){
            stk.push(stoi(tokens[i]));
            }
            int t1=stk.top();
            if (tokens[i]=="+"){
                stk.pop();
                int t2=stk.top();
                stk.pop();
                stk.push(t1+t2);
            }
            else if(tokens[i]=="-"){
                stk.pop();
                int t2=stk.top();
                stk.pop();
                stk.push(t2-t1);
            }
            else if(tokens[i]=="*"){
                stk.pop();
                int t2=stk.top();
                stk.pop();
                stk.push(t1*t2);
            }else if(tokens[i]=="/"){
                stk.pop();
                int t2=stk.top();
                stk.pop();
                stk.push(t2/t1);
            }else{
            stk.push(stoi(tokens[i]));

            }

            cout<<stk.top()<<endl;

        }

        return stk.top();
    }
};
