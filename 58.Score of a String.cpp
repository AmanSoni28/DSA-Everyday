// Topic Link : https://leetcode.com/problems/score-of-a-string/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
         int sum=0;
        for(int i=0;i<s.length()-1;i++){
          sum+=abs(int(s[i])-int(s[i+1]));
        }
        return sum;
    }
};