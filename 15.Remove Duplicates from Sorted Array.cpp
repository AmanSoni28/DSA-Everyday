// topic link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1595644816/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int n=nums.size();
            set<int>s;
            for(int i=0;i<n;i++){
                s.insert(nums[i]);
            } 
              int index=0;
            for(int value:s){
                nums[index++]=value;
            } 
            return s.size();
        }
    };