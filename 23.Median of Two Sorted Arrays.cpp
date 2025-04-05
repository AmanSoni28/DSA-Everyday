// topic link : https://leetcode.com/problems/median-of-two-sorted-arrays/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            int n=nums1.size(),m=nums2.size(),p=0;
            vector<int>ans;
            for(int i=0;i<n;i++)
            {
                ans.push_back(nums1[i]);
            }
            for(int i=0;i<m;i++)
            {
                ans.push_back(nums2[i]);
            }
            sort(ans.begin(),ans.end());
            p=ans.size();
            if(p%2==0)
            return ((ans[p/2]+ans[((p/2)-1)])/(double)2);
            else
            return ((double)ans[(p-1)/2]);
        }
    };