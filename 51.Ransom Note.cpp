// Topic Link : https://leetcode.com/problems/ransom-note/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>fre1(26,0);
        vector<int>fre2(26,0);
        for(int i=0;i<ransomNote.length();i++){
            fre1[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.length();i++){
            fre2[magazine[i]-'a']++;
        }
        for(int i=0;i<26;i++){
          if(fre1[i]>fre2[i] )
          return false;
        }
        return true;
    }
};