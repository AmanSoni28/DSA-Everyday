// topic link : https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    // T(c)=>O(n),s(c)=>O(1)
        bool check(vector<int>& nums) {
            int n=nums.size(),c=0;
            for(int i=0;i<n;i++){
                if(nums[i]>nums[(i+1)%n])
                c++;
            }
            if(c<=1)
            return true;
            else 
            return false;
    
            // T(c)=>O(n^2),s(c)=>O(1)
            
            // if(n==1)
            // return true;
            // for(int i=0;i<n;i++){
            //     c=0;
            //      for(int k=n-1;k>0;k--){
            //     if(nums[k]>=nums[k-1])
            //     c++;
            //     if(c==n-1)
            //     return true;
            //      }
            //      for(int j=n-1;j>0;j--){
            //         swap(nums[j],nums[j-1]);
            //     }
            // }
    
            // return false;
        }
    };