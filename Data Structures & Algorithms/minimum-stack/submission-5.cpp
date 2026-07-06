class MinStack {
public:
    stack<pair<int,int>>st;
    int cur_min=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        cur_min=min(cur_min,val);
        st.push({val,cur_min});
    }
    
    void pop() {
        st.pop();
        if (st.empty()) {
            cur_min = INT_MAX;        
        } else {
            cur_min = st.top().second;
        }
        
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
