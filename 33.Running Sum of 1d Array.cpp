// topic link: https://leetcode.com/problems/running-sum-of-1d-array/?envType=problem-list-v2&envId=array

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans(nums.size());         //vector of size=>nums.size()         
        ans[0]=nums[0];
        if(nums.size()==1)
        return nums;
        for(int i=1;i<nums.size();i++){
          ans[i]=nums[i]+ans[i-1];
        }
          return ans;
    }
};