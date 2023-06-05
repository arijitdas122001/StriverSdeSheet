#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &nums, int s){
   // Write your code here.
      int n=nums.size();
      vector<vector<int>>ans;
        unordered_map<int,int>mp;
        int row=0;
        for(int i=0;i<n;i++){
           vector<int>temp;
            if(mp.count(s-nums[i])){
               int noofoccur=mp[s-nums[i]];
               while (noofoccur--) {
                 temp.push_back(min(nums[i],s - nums[i]));
                 temp.push_back(max(nums[i],s-nums[i]));
                 ans.push_back(temp);
               }
            }
           mp[nums[i]]++;
        }
        sort(ans.begin(),ans.end());
        return ans;
}