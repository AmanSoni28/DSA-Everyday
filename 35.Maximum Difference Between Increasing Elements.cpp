//topic link: https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/?envType=daily-question&envId=2025-06-16

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int st=0,end=1;
        int maxi=INT_MIN;
        while(st<n-1){
          if(nums[st] < nums[end])
          maxi=max(maxi,(nums[end]-nums[st]));
          if(end==n-1){
           st++; 
           end=st+1;
          }
          else end++;
        }

       if(maxi==INT_MIN) 
       return -1;
       return maxi;
    }
};