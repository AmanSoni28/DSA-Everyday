// topic link : https://leetcode.com/problems/valid-anagram/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isAnagram(string s, string t) {
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            int n=s.size();          //or s.length()
            int m=t.size();          //or t.length()
            int c=0;
            if(n!=m)
            return false;
            for(int i=0;i<n;i++)
            {
             if(s[i]==t[i])
             c++;
            }
           if(c==n)
           return true;
           else
           return false;
        }
    };