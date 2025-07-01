// Topic link : https://leetcode.com/problems/find-the-duplicate-number/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {          //T(c)=>O(nlog(n))
        sort(nums.begin(),nums.end());              //re-solve in n time complexity
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1])
             return nums[i];
        }
      
        return -1;
    }
};

