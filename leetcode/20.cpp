class Solution {
public:
    bool isValid(string s) {
        char stk[10010];
        int top = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                stk[top++] = s[i];
            }else{
                if(!top) return false;
                if(s[i] == ')') 
                    if(stk[--top] != '(') return false;
                if (s[i] == ']')
                    if(stk[--top] != '[') return false;
                if(s[i] == '}') 
                    if(stk[--top] != '{') return false;
            }
        }
        if(top == 0)
            return true;
        else
            return false;
        
    }
};