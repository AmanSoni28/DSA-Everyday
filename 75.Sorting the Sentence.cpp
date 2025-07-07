// Topic Link : https://leetcode.com/problems/sorting-the-sentence/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        string str;
        for(int i=1;i<10;i++){
            int st=0;
            for(int j=0;j<s.length();j++){
                if(s[j]==' ') st=j+1;
                if(s[j]-'0'==i){                     //change char to int(ASCII)
                str+=s.substr(st,j-st)+" ";
                break;
                }
            }
        }
         return str.substr(0,str.length()-1);      
    }
};