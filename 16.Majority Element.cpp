// topic link :https://leetcode.com/problems/majority-element/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //1. brute force approach T(c)=>O(n^2)

       int n=nums.size();

    //    for(int i: nums){
    //     int frequency=0;
    //     for(int j: nums){
    //      if(i==j)
    //      frequency++;
    //     }
    //     if(frequency>n/2)
    //     return i;
    //    }

    //    return -1;

    //2. oplimal approach by using sorting T(c)=>o(nlog(n)+n)=>O(nlog(n))

    //    sort(nums.begin(),nums.end());
    //    if(n==1)
    //    return nums[0];

    //    int frequency=1;
    //    for(int i=1;i<n;i++){
    //     if(nums[i]==nums[i-1])
    //     frequency++;
    //     else 
    //     frequency=1;
    //     if(frequency>n/2)
    //     return nums[i];
    //    }

    //    return -1;

    //3.  Moore's Voting Algorithm T(c)=>O(n)

    int frequency=0,ans=0;
    for(int i=0;i<n;i++){
        if(frequency==0)
        ans=nums[i];
        if(ans==nums[i])
        frequency++;
        else
        frequency--;
    }
    return ans;
    }
};