class heap{
public:
void insert(vector<int>&heap,int n,int ele){
    int size=heap.size();
    heap[size+1]=ele;
    int index=size+1;
    while(index>1){
        int parent=index/2;
        if(heap[index]<parent){
            swap(heap[index],heap[parent]);
            index=parent;
        }
        else{
            return;
        }
    }
}
void deletefromheap(vector<int>&heap){
if(heap.size()==0){
    return;
}
int sz=heap.size()-1;
heap[1]=heap[sz];
sz--;
int ind=1;
while(ind<sz){
    int leftchild=2*ind;
    int rightchild=2*ind+1;
    if(leftchild<sz && heap[leftchild]>heap[ind]){
        swap(heap[leftchild],heap[ind]);
        ind=leftchild;
    }
    else if(rightchild<sz && heap[rightchild]>heap[ind]){
        swap(heap[rightchild],heap[ind]);
        ind=rightchild;
    }else{
        return;
    }
}
};
void heapify(vector<int>arr,int n,int ind){
    int largest=ind;
    int leftchild=2*ind;
    int rightchild=2*ind+1;
    if(leftchild<arr.size() && arr[leftchild]>arr[ind]){
        largest=leftchild;
    }
    if(rightchild<arr.size() && arr[rightchild]>arr[ind]){
        largest=rightchild;
    }
    if(largest!=ind){
        swap(arr[ind],arr[largest]);
        heapify(arr,n,largest);
    }
}
int main(){
    int n=5;
    vector<int>arr(n);
    for(int i=n/2;i>=0;i--){
        heapify(arr,n,i);
    }
}