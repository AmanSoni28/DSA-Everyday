// Topic Link : https://leetcode.com/problems/faulty-keyboard/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string finalString(string s) {
        string ans="";
        for(int j=0; j<s.length();j++){
             if(s[j]=='i')
             reverse(s.begin(),s.begin()+j);
        }
        for(int j=0;j<s.length();j++){
            if(s[j]!='i')
            ans+=s[j];
        }
        return ans;
    }
};