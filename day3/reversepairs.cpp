#include <bits/stdc++.h> 
    void merge(int low,int mid,int high,vector<int>&nums){
      int left=low,right=mid+1;
      int cnt=0;
      vector<int>temp;
      while(left<=mid && right<=high){
       if(nums[left]<=nums[right]){
           temp.push_back(nums[left++]);
       }else{
            temp.push_back(nums[right++]);
       }
      }
      while(left<=mid){
            temp.push_back(nums[left++]);
      }
      while(right<=high){
         temp.push_back(nums[right++]);
      }
      for(int i=low;i<=high;i++){
          nums[i]=temp[i-low];
      }
    }
int countpairs(int low,int mid,int high,vector<int>&nums){
    int right=mid+1;
    int left=low;
    int cnt=0;
    for(int i=low;i<=mid;i++){
        while(right<=high && (nums[i]>2LL*nums[right])){
            right++;
        }
        cnt+=(right-(mid+1));
    }
    return cnt;
}
    int mergesort(int low,int high,vector<int>&nums){
        int cnt=0;
        if(low>=high)return 0;
            int mid=(low+high)/2;
           cnt+=mergesort(low,mid,nums);
            cnt+=mergesort(mid+1,high,nums);
            cnt+=countpairs(low,mid,high,nums);
            merge(low,mid,high,nums);
        return cnt;
    }
int reversePairs(vector<int> &nums, int n){
	// Write your code here.
        return mergesort(0,n-1,nums);	
}