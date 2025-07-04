// Topic Link : https://leetcode.com/problems/to-lower-case/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
        return s;
    }
};