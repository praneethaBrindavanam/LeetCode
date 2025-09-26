class FreqStack {
public: 
    priority_queue<pair<int,pair<int,int>>> pq;
    unordered_map<int,int> freq;
    int idx = 0;

    FreqStack() {
    }
    
    void push(int val) {
        freq[val]++;        
        pq.push({freq[val],  {idx, val}});
        idx++;
    }
    
    int pop() {
        int top = pq.top().second.second;
        freq[top]--;
        pq.pop();
        
        return top;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */