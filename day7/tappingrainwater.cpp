 int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmax(n,0),rightmax(n,0);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
           maxi=max(maxi,height[i]);
           leftmax[i]=maxi;
        }
        maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            maxi=max(maxi,height[i]);
            rightmax[i]=maxi;
        }
        int totaltrapwater=0;
        for(int i=1;i<n;i++){
            int possiblewater=min(leftmax[i],rightmax[i]);
            totaltrapwater+=abs(possiblewater-height[i]);
        }
        return totaltrapwater;
    }