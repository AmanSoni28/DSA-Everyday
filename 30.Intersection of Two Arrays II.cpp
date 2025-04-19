// topic link : https://leetcode.com/problems/intersection-of-two-arrays-ii/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
             
          sort(nums1.begin(),nums1.end());              //Brute Force t(c)=>O(n^2)
          sort(nums2.begin(),nums2.end());
          vector<int>common;
          int count=0;
          for(int i=0;i<nums1.size();i++){
            int newcount=0;
            if(i!=0){
            if(nums1[i]!=nums1[i-1])
            count=0;
            }
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    if(newcount==count){
                    common.push_back(nums1[i]);
                    count++;
                    break;
                    }
                    newcount++;
                }
            }
          }
          return common;
        }
    };