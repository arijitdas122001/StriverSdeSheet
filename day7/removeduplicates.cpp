int removeDuplicates(vector<int> &nums, int n) {
	// Write your code here.
        int i=0,ptr=1;
       while(ptr<n){
           if(nums[i]==nums[ptr])ptr++;
           else{
               nums[i+1]=nums[ptr];
               i++;
           }
       }
        return i+1;
}