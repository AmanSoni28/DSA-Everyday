// Topic Link : https://leetcode.com/problems/buddy-strings/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool buddyStrings(string s, string goal) {              //T(C)=>O(n)
        
        if(s.length()!=goal.length()) return false;
        vector<int>fre1(26,0);

        for(int i=0;i<s.length();i++){
            fre1[s[i]-'a']++;
        }

       if(s==goal){
         for(int i=0;i<26;i++){
            if(fre1[i]>1)  return 1;
         }
         return 0;
       }
       else{
        vector<int>ans;
        for(int i=0;i<s.length();i++){
          if(s[i]!=goal[i]) ans.push_back(i);
        }
        if(ans.size()!=2) return false;
        return(s[ans[0]]==goal[ans[1]] && s[ans[1]]==goal[ans[0]] );
       } 
    }
};

// class Solution {                       //TLE t(c)=O(n^2)
// public:
//     bool buddyStrings(string s, string goal) {
//         string temp=s;
//         for(int i=0;i<s.length()-1;i++){
//             for(int j=i;j<s.length();j++){
//                 if(i!=j){
//                 swap(s[i],s[j]);
//                 if(s==goal)  return 1;
//                 }
//                  s=temp;
//             }
//         }
//         return 0;
//     }
// };