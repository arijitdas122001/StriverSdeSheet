class Queue {
    vector<int>q;
    int cnt,front,rear,capacity;
public:
    Queue(capacity) {
        // Implement the Constructor
        q.resize(capacity);
        int front=0,rear=0,cnt=0;
        int capacity=capacity;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(cnt==0)return true;
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(cnt>=capacity)cout<<"Can not be pushed"<<endl;
        arr[front%capacity]=ele;
        fornt=front+1;
        cnt++;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(cnt==0)cout<<"queue is empty"<<endl;
        return arr[rear%capacity];
        arr[rear%capacity]=-1;
        cnt--;
        rear++;
    }

    int front() {
        // Implement the front() function
        return arr[front%capacity];
    }
};