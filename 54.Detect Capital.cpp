// Topi Link : https://leetcode.com/problems/detect-capital/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
         
         if(isupper(word[0])){
          for(int i=1;i<word.length();i++){
            if(isupper(word[i]))
             count++;
           }
          if(count==word.length()-1 || count==0) return true;
          else return false;
        }
        else{
         for(int i=1;i<word.length();i++){
          if(isupper(word[i]))
            return false;
         }
        }
        //  if(int(word[0])>=65 && int(word[0])<=90){

        //   for(int i=1;i<word.length();i++){
        //     if(int(word[i])>=65 && int(word[i])<=90)
        //      count++;
        //     }
        //     if(count==word.length()-1 || count==0) return true;
        //     else return false;
        // }
        // else{
        //  for(int i=1;i<word.length();i++){
        //   if(int(word[i])>=65 && int(word[i])<=90)
        //     return false;
        //  }
        // }

        return true;
    }
};