#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int K) {
	// Write your code here.
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(i!=0 && nums[i-1]==nums[i])continue;
            int ptr1=i+1,ptr2=n-1;
            int sum=K-nums[i];
            while(ptr1<ptr2){
                int tempsum=nums[ptr1]+nums[ptr2];
              if(tempsum==sum){
                vector<int>temp={nums[i],nums[ptr1],nums[ptr2]};
                ans.push_back(temp);
                ptr1++;
                ptr2--;
                while(ptr1<ptr2 && nums[ptr1-1]==nums[ptr1])ptr1++;
                while(ptr1<ptr2 && nums[ptr2+1]==nums[ptr2])ptr2--;
              }else if(tempsum<sum){
                  ptr1++;
              }else{
                  ptr2--;
              }
            }
        }
    return ans;
}