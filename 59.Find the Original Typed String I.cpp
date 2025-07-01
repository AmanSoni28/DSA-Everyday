// Topic Link : https://leetcode.com/problems/find-the-original-typed-string-i/?envType=daily-question&envId=2025-07-01

#include<bits/stdc++.h>
using namespace std;

class Solution {                                         // T(c)=O(n)
public:
    int possibleStringCount(string word) {
        int count=0;
        for(int i=1;i<word.length();i++){
            if(word[i]==word[i-1])
            count++;
        }
        return count+1;
    }
};