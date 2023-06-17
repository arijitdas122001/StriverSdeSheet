#include <bits/stdc++.h>
class Queue {
    // Define the data members(if any) here.
    
    public:
     stack<int>ip,op;
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        ip.push(val);
    }

    int deQueue() {
        // Implement the dequeue() function.
         int ans;
         if(op.empty() && ip.empty())return -1;
        if(!op.empty()){
            ans=op.top();
            op.pop();
            return ans;
        }
        while(!ip.empty()){
           op.push(ip.top());
           ip.pop();
        }
        ans=op.top();
        op.pop();
        return ans;
    }

    int peek() {
        // Implement the peek() function here.
         if(op.empty() && ip.empty())return -1;
           int ans;
        if(!op.empty()){
            ans=op.top();
            return ans;
        }
        while(!ip.empty()){
           op.push(ip.top());
           ip.pop();
        }
        ans=op.top();
        return ans;
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        if(op.empty() && ip.empty()){
           return true;
       }
       return false;
    }
};