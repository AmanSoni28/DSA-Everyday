// topic link : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/?envType=study-plan-v2&envId=top-interview-150

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int n=nums.size(),c=1;
            vector<int>vec;
            vec.push_back(nums[0]);
            for(int i=0;i<n-1;i++){
              if(nums[i]==nums[i+1]){
              c++;
              if(c<3)
              vec.push_back(nums[i+1]);
              }
              else{
              vec.push_back(nums[i+1]); 
              c=1;
              }
            }
            int m=vec.size();
    
            for(int i=0;i<m;i++){
                nums[i]=vec[i];
            }
            return m;
        }
    };