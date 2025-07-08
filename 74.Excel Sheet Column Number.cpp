// Topic Link : https://leetcode.com/problems/excel-sheet-column-number/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        int n = columnTitle.length();
        for(int i=n;i>0;i--){
            ans+=(columnTitle[n-i]-'A'+1)*pow(26,i-1);
        }
        return ans;
    }
};

// <--------------------------Notes---------------------------->

// "A" = A * 26^0;
//     = 1 * 1= 1

// "AB" = A * 26^1 + B * 26^0
//       = 1 * 26 + 2 = 28

//"ABD" = A * 26^2 + B * 26^1 + D * 26^1
//      = 1 * 26^2 + 2 * 26^1 + 4 * 26^0 = 732

//(columnTitle[n-i]-'A'+1)     //Convert character to number (A=1, B=2, ..., Z=26)