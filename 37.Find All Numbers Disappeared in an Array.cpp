// topic link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n=nums.size();
     vector<int>ans;
      set<int>s;
      for(int i:nums){
        s.insert(i);
      }
      for(int i=1;i<=n;i++){
         if(s.contains(i)==false){
             ans.push_back(i);
         }
      } return ans;
    }
};