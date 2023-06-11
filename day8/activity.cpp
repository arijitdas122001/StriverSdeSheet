#include <bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,int>>activites;
    for(int i=0;i<start.size();i++){
        activites.push_back({start[i],finish[i]});
    }
    sort(activites.begin(),activites.end(),[&](pair<int,int>&a,pair<int,int>&b){
        return a.second<b.second;
    });
    int maxnumber=1;
    int previousactivity=activites[0].second;
    for(int i=1;i<start.size();i++){
         if(previousactivity<=activites[i].first){
             maxnumber++;
             previousactivity=activites[i].second;
         }
    }
    return maxnumber;
}