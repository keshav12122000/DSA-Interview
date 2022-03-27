class Solution {
public:
    bool isValid(string str) {
        
        stack<char> st;
        
        for(int i=0;i<str.length();i++)  {

            if(st.empty()==false){
                if(str[i]==')' && st.top()=='(')
                {
                    st.pop();
                }
                    
                
               else if(str[i]=='}' && st.top()=='{')
               {
                   st.pop();
               }
                    
                
               else if(str[i]==']' && st.top()=='[')
                    st.pop();
                
                else
                    st.push(str[i]);
            }
            else
                st.push(str[i]);
        }
        
        if(st.empty())
            return true;
        else
            return false;
    }
};