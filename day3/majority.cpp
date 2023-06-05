#include <bits/stdc++.h>

int findMajorityElement(int nums[], int n) {
	// Write your code here.
  int num=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                num=nums[i];
				cnt=1;
            }
           else if(num==nums[i]){
                cnt+=1;
            }else{
                cnt-=1;
            } 
        }
int cnt1=0;
for(int i=0;i<n;i++){
	if(nums[i]==num)cnt1++;
}
if(cnt1>n/2)return num;
return -1;
}