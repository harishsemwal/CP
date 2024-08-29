class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack; // take number stack
        stack<string> strStack; // take stirng stack
        
        string str;   // this is for answer
        int num = 0;  // number which is deals with kth value
        
        for(char x : s){ // traverse
            if(isdigit(x)){ // number hai yah nahi
                num = num * 10 + (x - '0'); // if that is number take that into num
            }
            else if(x == '['){      // if that is [ then
                strStack.push(str); // push that into the stack
                str = "";           // ans is nothing in that perticular time
                
                numStack.push(num); 
                num = 0;
            }
            else if(x == ']'){
                string temp = str;
                str = strStack.top();
                strStack.pop();
                
                int count = numStack.top();
                numStack.pop();
                
                while(count-- > 0){
                    str += temp;
                }
            }
            else{
                str += x;
            }
        }
        return str;
    }
};