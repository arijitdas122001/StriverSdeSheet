#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int>coins={1,2,5,10,20,50,100,500,1000};
int ptr=coins.size()-1;
int cnt=0;
while(amount!=0 && ptr>=0){
    if(amount<coins[ptr]){
         ptr--;
    } else {
      amount -= coins[ptr];
      cnt++;
    }
}
return cnt;
}