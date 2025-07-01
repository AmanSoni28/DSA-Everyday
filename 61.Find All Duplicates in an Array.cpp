// Topic Link : https://leetcode.com/problems/find-all-duplicates-in-an-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>fre(nums.size()+1,0);
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            fre[nums[i]]++;
        }
        for(int i=0;i<fre.size();i++){
            if(fre[i]>1)
            ans.push_back(i);
        }
        return ans;
        // vector<int>vec;                                 //T(c)=O(nlog(n))
        // sort(nums.begin(),nums.end());                  //try to convert in T(c)=O(n)
        // for(int i=0;i<nums.size()-1;i++){
        //   if(nums[i]==nums[i+1]) vec.push_back(nums[i]);
        // }
        // return vec;
    }
};