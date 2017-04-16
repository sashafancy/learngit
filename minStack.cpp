class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> current_s;
    stack<int> min_s;
    
    void push(int x) {
        if(min_s.empty()){
            min_s.push(x);
        }        
        else if(x<=getMin()){
            min_s.push(x);
        }
        current_s.push(x);
    }
    
    void pop() {
        if(current_s.top() == getMin()){
            min_s.pop();
        }
        current_s.pop();
    }
    
    int top() {
        return current_s.top();
    }
    
    int getMin() {
        return min_s.top();
    }
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */