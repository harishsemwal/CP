class MyStack {
    queue<int> in,out;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        if(empty()){
            in.push(x);
        }
        else if(in.empty()){
            out.push(x);
        }
        else{
            in.push(x);
        }
    }
    
    int pop() {
        int tmp;
        if(in.empty()){
            while(out.size()-1 != 0 ){
                tmp=out.front();
                in.push(tmp);
                out.pop();
            }
            tmp = out.front();
            out.pop();
        }
        else {
            while(in.size()-1 != 0){
                tmp = in.front();
                out.push(tmp);
                in.pop();
            }
            tmp = in.front();
            in.pop();
        }
        return tmp;
    }
    
    int top() {
        int tmp;
        if(in.empty()){
            while(out.size()-1 !=0){
                tmp=out.front();
                in.push(tmp);
                out.pop();
            }
            tmp = out.front();
            in.push(tmp);
            out.pop();
        }
        else {
            while(in.size()-1 != 0){
                tmp = in.front();
                out.push(tmp);
                in.pop();
            }
            tmp = in.front();
            out.push(tmp);
            in.pop();
        }
        return tmp;
    }
    
    bool empty() {
        return in.empty() && out.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */