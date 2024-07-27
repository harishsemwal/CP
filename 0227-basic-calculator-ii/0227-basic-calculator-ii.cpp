class Solution {
public:
    int calculate(string s) {
        int n = s.size();
        stack<int> st;
        char sign = '+'; 
        int num = 0; 
        
        for(int i = 0; i < n; i++) {
            // If the current character is a digit, construct the number
            if(isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }
            
            // If the current character is an operator or the end of the string,
            // process the previous number
            if(!isdigit(s[i]) && !isspace(s[i]) || i == n - 1) {
                if(sign == '+') {
                    st.push(num);
                } else if(sign == '-') {
                    st.push(-num);
                } else if(sign == '*') {
                    int top = st.top();
                    st.pop();
                    st.push(top * num);
                } else if(sign == '/') {
                    int top = st.top();
                    st.pop();
                    st.push(top / num);
                }
                // Update the sign and reset the number
                sign = s[i];
                num = 0;
            }
        }

        // Sum up all the values in the stack
        int result = 0;
        while(!st.empty()) {
            result += st.top();
            st.pop();
        }
        return result;
    }
};