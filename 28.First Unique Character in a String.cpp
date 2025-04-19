// topic link : https://leetcode.com/problems/first-unique-character-in-a-string/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int firstUniqChar(string s) {

         //Using Hashing T(c)=>O(n)
           int n=s.length();            
           vector<int>frequency(26,0);                                  
           for(int i=0;i<n;i++){
            frequency[s[i]-'a']++;                               //ASCII 'a'=>97
           }
           for(int i=0;i<n;i++){
            if(frequency[s[i]-'a']==1)
            return i;
           }
    
           return -1;
    
        //or, Brute Force T(c)=>O(n^2)
            // for(int i=0;i<s.length();i++)
            // {
            //     bool isfound=true;
            //     for(int j=0;j<s.length();j++)
            //     {
            //         if(i!=j&&s[i]==s[j])
            //         {
            //             isfound=false;
            //             break;
            //         }
            //     }
            //     if(isfound)
            //     {
            //         return i;
            //     }
            // }
            // return -1;
        }
    };