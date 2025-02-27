class MinStack {
    private :
    stack<int> s;
    stack<int> t;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        t.push(!t.empty()?min(t.top(),val):val);
    }
    
    void pop() {
        s.pop();
        t.pop();
        
    }
    
    int top() {
        return s.top();
        
    }
    
    int getMin() {
        return t.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
