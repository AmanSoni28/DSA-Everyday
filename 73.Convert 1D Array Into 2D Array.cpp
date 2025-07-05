// Topic link : https://leetcode.com/problems/convert-1d-array-into-2d-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {        //T(c)=O(m*n)
       if((m*n)!=original.size()) return {}; 
       vector<vector<int>>ans(m,vector<int>(n,0));    //m-row,n-column vector with 0 values  
        int k=0;
        for(int i=0;i<ans.size(); i++){
            for(int j=0;j<ans[i].size();j++){
            ans[i][j]=original[k++];
            }
        }
        return ans;
    }
};


// class Solution {
// public:
//     vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {             //T(c)=O(m*n)
//         if (original.size() != m * n) return {};         // Check if conversion is possible
        
//         vector<vector<int>> result(m, vector<int>(n));
//         for (int i = 0; i < original.size(); i++) {
//             result[i / n][i % n] = original[i];
//         }
//         return result;
//     }
// };