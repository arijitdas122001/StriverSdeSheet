#include <bits/stdc++.h> 
int merge(long long *arr,int low,int mid,int high,int n,vector<long long>&temp){
    int left=low;
    int right=mid;
    int k=low;
    int inv=0;
    while((left<=mid-1) && (right<=high)){
        if(arr[left]<=arr[right]){
            temp[k++]=arr[left++];
        }else{
            temp[k++]=arr[right++];
            inv=inv+(mid-left);
        }
    }
    while(left<=mid-1){
        temp[k++]=arr[left++];
    }
    while(right<=high){
        temp[k++]=arr[right++];
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i];
    }
    return inv;
}
long long mergesort(long long *arr,int low,int high,int n,vector<long long>&temp){
    long long inv=0;
    if (high > low) {
      long long mid = (high+low) / 2;
      inv += mergesort(arr, low, mid, n,temp);
      inv += mergesort(arr, mid + 1, high, n,temp);
      inv += merge(arr, low, mid+1, high, n,temp);
    }
    return inv;  
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    vector<long long>temp(n);
    return mergesort(arr,0,n-1,n,temp);
}