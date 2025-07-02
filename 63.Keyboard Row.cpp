// Topic link : https://leetcode.com/problems/keyboard-row/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string one="qwertyuiopQWERTYUIOP";
        string two="asdfghjklASDFGHJKL";
        string three="zxcvbnmZXCVBNM";
        vector<string>ans;

        for(int j=0;j<words.size();j++){

         int count=0;
         for(int i=0;i<words[j].length();i++){
            if(one.find(words[j][i]) < 100)
            count++;
         }
         if(count==words[j].length()){
         ans.push_back(words[j]);
         continue;
         }

         count=0;
         for(int i=0;i<words[j].length();i++){
          if(two.find(words[j][i]) < 100)
            count++;
         }
         if(count==words[j].length()){
         ans.push_back(words[j]);
         continue;
         }

         count=0;
         for(int i=0;i<words[j].length();i++){
            if(three.find(words[j][i]) < 100)
            count++;
         }
         if(count==words[j].length()){
         ans.push_back(words[j]);
         continue;
         }

        }
        return ans;
    }
};