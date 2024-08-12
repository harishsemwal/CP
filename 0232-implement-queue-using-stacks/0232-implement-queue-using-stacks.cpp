class MyQueue {
public:
    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(st.size() == 0){
            st.push(x);
            return;
        }
        int temp = st.top();
        st.pop();
        push(x); // Ye recusion haii Yah per saare element pehli pop kar rahe hai... fir 
        st.push(temp); /// last mai ye eleement ko daal rahe hain sabse upper.//\
        // Ye sab isliye kar rahe hain taaki.. top par wo rahe to pehli ayaa.....
    }
    
    int pop() {
        int temp = st.top();
        st.pop();
        return temp;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */