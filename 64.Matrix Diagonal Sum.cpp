// Topic Link : https://leetcode.com/problems/matrix-diagonal-sum/

#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int diagonalSum(vector<vector<int>>& mat) {         //T(c)=O(n^2)
//         int sum=0;
//         for(int i=0;i<mat.size();i++){
//             for(int j=0;j<mat[i].size();j++){
//                 if( i==j )                              //for primary diagonal
//                 sum+=mat[i][j];
//                 else if( i+j==mat.size()-1)             //for seconadry diagonal
//                 sum+=mat[i][j];
//             }
//         }
//         return sum;
//     }
// };

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {        //T(c)=O(n)
        int sum=0;
        for(int i=0;i<mat.size();i++){     
            sum+=mat[i][i];                            //for primary diagonal
            if(i!=(mat.size()-1-i))                    //for skik i=i
            sum+=mat[i][mat.size()-1-i];               //for seconadry diagonal
        }
        return sum;
    }
};