// topic link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n=prices.size();
            int profit=0,currEle=prices[0],newprofit;        // T(c)=>O(n) best Approach
    
            for(int i=0;i<n;i++){
               newprofit=prices[i]-currEle;
               profit=max(profit, newprofit);
                
               currEle=min(prices[i],currEle);
            }
    
            // Using Two Pointer ,T(c)=>O(n) but TLE?
            // int start=0,end=n-1,profit=0,newProfit;       
            // while(start<n-1){
            //     newProfit=prices[end]-prices[start];
            //     profit=max(profit,newProfit);
            //     if(end>start)
            //     end--;
            //     else {
            //     start++;
            //     end=n-1;
            //     }
            // }
            
            // Brute Force, T(c)=>O(n^2) but TLE
            // for(int i=0;i<n;i++){
            //     for(int j=i+1;j<n;j++){
            //         newProfit=prices[j]-prices[i];
            //         profit=max(profit,newProfit);
            //     }
            // }
    
            if(profit >0)
            return profit;
            else 
            return 0;
        }
    };