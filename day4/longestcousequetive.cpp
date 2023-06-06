int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    // Write your code here.
     unordered_set<int>st;
        for(auto it:nums){
            st.insert(it);
        }
        int length=0;
        for(auto it:nums){
            // if not present in the set
            if(!st.count(it-1)){
                int num=it;
                int cnt=1;
                // while present in the set
                while(st.count(num+1)){
                    cnt++;
                    num=num+1;
                }
            length=max(length,cnt);
            }
        }
        return length;
}