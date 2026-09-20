class MinStack {
private:
    vector<int> s_;
    int minIndex;
public:
    MinStack() {
        minIndex = -1;
    }
    
    void push(int val) {
        s_.push_back(val);

        if(minIndex == -1 || s_[minIndex] > val) minIndex = s_.size() - 1;
        
    }
    
    void pop() {
        if(s_.size() -1 == minIndex  )
        {

            minIndex=0;
            for(int i=1;i<s_.size() -1 ;i++) if(s_[i] < s_[minIndex]) minIndex = i;
        }
    
        s_.pop_back();
    }
    
    int top() {
        return s_[s_.size() - 1];
    }
    
    int getMin() {
        return s_[minIndex];
    }
};
