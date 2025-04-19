// topic link : https://leetcode.com/problems/maximum-subarray/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int n=nums.size();                  //Kadane's Algorithm    T(c)=>O(n)
            int cs=0,ms=INT_MIN;
            for(int i=0;i<n;i++)
            {
               cs+=nums[i];
               ms=max(ms,cs);
               if(cs<0)
               {
                cs=0;
               }
            }
            return (ms);
        }
    };