// Topic Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string str="",result="";
        for(int i=0;i<s.length();i++){
          if(str.find(s[i])>s.length())               //when not find
           str+=s[i];
          else                                        //when find
           str=str.substr(str.find(s[i])+1) + s[i];

          if(str.length() > result.length())
          result=str;
        }

        return result.size();
        }
};