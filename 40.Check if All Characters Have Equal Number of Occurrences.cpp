// topic link : https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/?envType=problem-list-v2&envId=string

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool areOccurrencesEqual(string s) {
     vector<int>freq(26,0);
     for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;
     }

     int specialfreq=0;
     for(int i=0;i<26;i++){
        if(freq[i]!=0){
         specialfreq=freq[i];
         break;
        }
     }
     for(int i=0;i<26;i++){
        if(freq[i]!=specialfreq && freq[i]!=0)
        return false;
     }
    return true;
    }
};