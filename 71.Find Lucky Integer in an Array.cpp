// Topic Limk : https://leetcode.com/problems/find-lucky-integer-in-an-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>fre(501,0);
        vector<int>ans;

        for(int i=0;i<arr.size();i++){
            fre[arr[i]]++;
        }

        int maxi=-1;
        for(int i=1;i<fre.size();i++){
            if(i==fre[i])
            maxi=max(maxi,fre[i]);
        }

        return maxi;
    }
};