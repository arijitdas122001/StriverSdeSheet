class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int ind=-1;
        // finding the dipping point where we will just greater value
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind=i;
                break;
            }
        }
        // swapping the value with the just greater value
        // cout<<ind<<" ";
        if(ind==-1){
           reverse(nums.begin(),nums.end());
        }else{
        for(int i=n-1;i>ind;i--){
            if(nums[ind]<nums[i]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        // we are reversing the right part to find the closest number 
        reverse(nums.begin()+ind+1,nums.end());
        }
    }
};