#include <bits/stdc++.h> 
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int cnt=0;
    int n=jobs.size();
    vector<pair<int,int>>sortedprofit;
    int maxdays=0;
    for(int i=0;i<n;i++){
        maxdays=max(maxdays,jobs[i][0]);
        sortedprofit.push_back({jobs[i][0],jobs[i][1]});
    }
    sort(sortedprofit.begin(),sortedprofit.end(),[&](pair<int,int>&a,pair<int,int>&b){
        return a.second>b.second;
    });
    // just I will count from the deadline the any day is free from that deadline then I can say I can do the 
    // the workd on that day for this I have to keep a cnt
    // initially all days are vacant
   vector<int>vacantdays(maxdays+1,false);
   int maxprofit=0;
   for(int i=0;i<n;i++){
       for(int j=sortedprofit[i].first;j>=1;j--){
           if(vacantdays[j]==false){
               maxprofit+=sortedprofit[i].second;
               vacantdays[j]=true;
               break;
           }
       }
   }
return maxprofit;
}
