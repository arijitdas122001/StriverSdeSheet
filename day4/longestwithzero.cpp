#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    int n=nums.size();
        unordered_map<int,int>mp;
        int sum=0,length=0,cnt=0;
        for(int i=0;i<n;i++){
          sum+=nums[i];
          if(sum==k){
              length=max(length,i+1);
          }
          int prevsub=sum-k;
          if(mp.find(prevsub)!=mp.end()){
              length=max(length,i-mp[prevsub]);
          }
        if(mp.find(sum)==mp.end())mp[sum]=i;
        }
        return length;
}