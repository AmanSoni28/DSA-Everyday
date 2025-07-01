// Topic Link : https://leetcode.com/problems/contains-duplicate/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>s;
        for(int val:nums){
            s.insert(val);
        }
        if(s.size()==nums.size())
        return false;
        else 
        return true;
    }
};