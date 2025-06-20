// topic link  : https://leetcode.com/problems/length-of-last-word/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
         int p=s.find_last_not_of(' ');
         int count=0;
        for(int i=p;i>=0;i--){
          if((s[i]) == ' ')
          return count;
          count++;
        }
        return count++;
    } 
};