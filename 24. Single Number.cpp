// topic link : https://leetcode.com/problems/single-number/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int n=nums.size();
         int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=ans^nums[i];                  //XOR Operator (n^n=0,n^0=0,1^1=0,1^0=0)
        }
        return ans;
        }
    };