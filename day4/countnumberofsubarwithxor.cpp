solve(vector<int> &A, int B) {
    unordered_map<int ,int>mp;
    int xr=0,cnt=0;
    mp[xr]++;
    for(auto it:A){
        xr=xr^it;
        int find=xr^B;
        cnt+=mp[find];
        mp[xr]++;
    }
    return cnt;
}
