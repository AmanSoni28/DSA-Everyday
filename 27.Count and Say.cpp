// Topic link : https://leetcode.com/problems/count-and-say/?envType=daily-question&envId=2025-04-18

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {          //T(c)=(2^n), S(c)=O(2^n)
        string str="1";
        string temp="";

        for(int i=0;i<n-1;i++){
         int count=1;
          for(int j=0;j<str.length();j++){
            if(j+1<str.length() && str[j]==str[j+1]){
             count++;
             continue;
            }
            temp+=to_string(count);
            temp+=str[j];
            count=1;
          }
          str=temp;
          temp="";
        }
        return str;
    }
};