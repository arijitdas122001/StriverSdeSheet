#include <bits/stdc++.h>

string fourSum(vector<int> nums, int target, int n) {
    // Write your code here.
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
      for(int i=0;i<n;i++){
            if(i!=0 && nums[i-1]==nums[i])continue;
            for(int j=i+1;j<n;j++){
              if(j!=i+1 && nums[j-1]==nums[j])continue;
              long long left=j+1,right=n-1;
              long long twosum=nums[i]+nums[j];
              long long reducedsum=target-twosum;
             while(left<right){
                   long long sum=nums[left]+nums[right];
                if(sum<reducedsum){
                    left++;
                }
                else if(sum>reducedsum){
                    right--;
                }
                else{
                    return"Yes";
                    vector<int>temp={nums[i],nums[j],nums[left],nums[right]};
                    ans.push_back(temp);
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1])left++;
                    while(left<right && nums[right]==nums[right+1])right--;
                }
             }
            }
        }
        return "No";
}
