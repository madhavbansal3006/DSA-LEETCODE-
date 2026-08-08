class Solution {
public:
    bool isValid(string s) {
        stack<int>stk;
        for(char c : s){
            if(c=='[' || c=='{' || c=='('){
                stk.push(c);
            }
            else{
                if(stk.size()==0) return false;
                if(c==']' && stk.top()=='[' || c=='}' && stk.top()=='{' || c==')' && stk.top()=='(') stk.pop();
                else{
                    return false;
                }
            }
        }
        return stk.size()==0;
    }
};