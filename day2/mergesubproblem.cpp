class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
       ans.push_back(intervals[0]);
       int ptr=0;
        for(int i=1;i<n;i++){
            if(ans[ptr][1]>=intervals[i][0]){
                ans[ptr][1]=max(ans[ptr][1],intervals[i][1]);
            }else{
                ptr++;
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};