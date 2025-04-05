// topic link : https://leetcode.com/problems/product-of-array-except-self/

#include<bits/stdc++.h>
using namespace std;

// t(c)=>O(n), s(c)=>O(n)
// Prefix-Suffix
class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int n=nums.size();
            vector<int>vec1;
            vector<int>vec2(n);           // vector of size n
            vec1.push_back(1);
            vec2[n-1]=1;
            for(int i=1;i<n;i++){                               //prefix
              vec1.push_back(vec1[i-1]*nums[i-1]);
                }
            for(int i=n-2;i>=0;i--){                            //suffix
              vec2[i]=(vec2[i+1]*nums[i+1]);
                }
              for(int i=0;i<n;i++){
                nums[i]=vec1[i]*vec2[i];
              }
        return nums;
        }
    };