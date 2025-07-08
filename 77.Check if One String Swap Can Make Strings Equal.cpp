// Topic Link : https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {     //T(C)=O(n)
        if(s1==s2) return 1;

        vector<int>temp;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]) temp.push_back(i);
        }
        if(temp.size()!=2) return 0;
        return (s1[temp[0]]==s2[temp[1]] && s1[temp[1]]==s2[temp[0]]);
    }
};

// class Solution {             //T(C)=O(n^2)
// public:
//     bool areAlmostEqual(string s1, string s2) {
//         if(s1==s2) return 1;
//          string temp=s1;
//         for(int i=0;i<s1.length()-1;i++){
//             for(int j=i;j<s1.length();j++){
//                 if(i!=j){
//                 swap(s1[i],s1[j]);
//                 if(s1==s2)  return 1;
//                 }
//                  s1=temp;
//             }
//         }
//         return 0;
//     }
// };