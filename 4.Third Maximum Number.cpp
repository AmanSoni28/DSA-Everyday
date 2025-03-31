// topic link: https://leetcode.com/problems/third-maximum-number/

.h>
using namespace std;#include<bits/stdc++

class Solution {
    public:
        int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         set<int>s;
         for(int i : nums)
         {
            s.insert(i);
         }
           vector<int>vec;
         for(int j: s)
         {
            vec.push_back(j);
         }
         int n=vec.size();
         if(n>=3)
         return vec[n-3];
         else if(n==2)
         return vec[1];
         else 
         return vec[0];
        }
    };                         