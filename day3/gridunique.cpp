int func(int ind1,int ind2,int m,int n,vector<vector<int>>&dp){
       if(ind1==0 || ind2==0)return 1;
       if(ind1>m || ind2>n || ind1<0 || ind2<0)return 0;
       if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];
    int cnt=0;
        cnt+=func(ind1-1,ind2,m,n,dp);
       cnt+=func(ind1,ind2-1,m,n,dp);
    return dp[ind1][ind2]=cnt;
    }
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>>dp(m,vector<int>(n,-1));
    return func(m-1,n-1,m,n,dp);
}