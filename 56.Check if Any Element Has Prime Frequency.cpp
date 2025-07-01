// Topic Link : https://leetcode.com/problems/check-if-any-element-has-prime-frequency/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        vector<int>fre(101,0);
        for(int i=0;i<nums.size();i++){
         fre[nums[i]]++;
        }

        for(int i=0;i<fre.size();i++){
            int count=0;
            if(fre[i]==0 || fre[i]==1)
            continue;
            for(int j=2;j<=sqrt(fre[i]);j++){
                if(fre[i]%j==0){
                    count++;
                }
            }
            if(count==0)
            return true;
        }
        return false;
    }
};