// Topic Link : https://leetcode.com/problems/find-triangular-sum-of-an-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        for(int j=0;j<nums.size()-1;j++){
         for(int i=0;i<nums.size()-1-j;i++){
            nums[i]=(nums[i]+nums[i+1])%10;
         }
        }
        return nums[0];
    }
};