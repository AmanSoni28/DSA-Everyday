// topic link : https://leetcode.com/problems/rotate-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
             vector<int>ans;
            int n =nums.size();
            for(int i=0;i<n;i++)
            {
                ans.push_back(nums[i]);
            }
    
              for(int i=0;i<n;i++)
            {
                nums[(i+k)%n]=ans[i];
            }
        }
    };