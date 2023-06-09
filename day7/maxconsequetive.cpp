 int n=nums.size();
        int cntofone=0,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]==1)cntofone++;
            else{
                cntofone=0;
            }
             maxi=max(cntofone,maxi);
        }
        return maxi;