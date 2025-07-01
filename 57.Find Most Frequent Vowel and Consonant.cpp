// Topic Link : https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFreqSum(string s) {
        vector<int>frequency(26,0);
        int maxVowel=0;
        int maxConsonant=0;
        for(int i=0;i<s.length();i++){
            frequency[s[i]-'a']++;
        }
        for(int i=0;i<frequency.size();i++){
         if(i==0 || i==4|| i==8 || i==14 || i==20){
            maxVowel= max(maxVowel,frequency[i]);
         }
         else{
            maxConsonant= max(maxConsonant,frequency[i]);
         }
        }
        return (maxVowel+maxConsonant);
    }
};