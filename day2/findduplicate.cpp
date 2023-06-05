class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int n=nums.size();
      int slow=nums[0],fast=nums[0];
      // this is because initially both poiner in nums[0] so conditon satisfied but 
      // but with do while loop it will run one time obv
      do{
          slow=nums[slow];
          fast=nums[nums[fast]];
      }while(slow!=fast);
      slow=nums[0];
      while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
      }
      return slow;
    }
};