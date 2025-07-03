// topic Link : https://leetcode.com/problems/reverse-words-in-a-string-iii/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int st=0, end=0;

        while(end<s.length()){
          while(end<s.length()){
             if(s[end]!=' ')
             end++;
             else
             break;
         }
         reverse(s.begin()+st,s.begin()+end);
         end++;
         st=end;
        }
        return s;

        // string ans="";
        // for(int i=0;i<s.length();i++){
        //     string word="";
        //     while(s[i]!=' ' && i<s.length()){
        //         word+=s[i];
        //         i++;
        //     }
        //     reverse(word.begin(),word.end());
        //     ans+=' '+word;
        // }
        // return ans.substr(1,ans.length()-1);
    }
};