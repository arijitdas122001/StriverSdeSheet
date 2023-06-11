int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int platforms=1,maxplatforms=1;
    int ptr1=1,ptr2=0;
    while(ptr1<n && ptr2<n){
        if(at[ptr1]<=dt[ptr2]){
            platforms++;
            ptr1++;
        }else{
            platforms--;
            ptr2++;
        }
        maxplatforms=max(maxplatforms,platforms);
    }
    return maxplatforms;
}