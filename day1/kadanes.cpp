class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int maxsum=nums[0],sum=nums[0];
        for(int i=1;i<n;i++){
            if(sum<0){
                sum=0;
            }
            sum+=nums[i];
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};