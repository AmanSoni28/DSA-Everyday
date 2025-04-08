// topic link : https://leetcode.com/problems/search-insert-position/

#include<bits/stdc++.h>
using namespace std;
//T(c)=>O(log(n))
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int n=nums.size();
            for(int i=0;i<n;i++){
                if(target<=nums[i]){
                    return i;
                }
            }
            return (n);
        }
    };