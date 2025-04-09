// topic link : https://leetcode.com/problems/roman-to-integer/

#include<bits/stdc++.h>
using namespace std;
// T(c)=>O(n)
class Solution {
    public:
        int romanToInt(string s) {
            int n=s.size(),sum=0,i=0;
            vector<int>se;
            for(int i: s){
                switch(i){
                case 'I' : se.push_back(1); break;
                case 'V' : se.push_back(5); break;
                case 'X' : se.push_back(10);; break;
                case 'L' : se.push_back(50);; break;
                case 'C' : se.push_back(100); break;
                case 'D' : se.push_back(500); break;
                case 'M' : se.push_back(1000); break;
            }
            }
    
            while(i<n) {
             if(i!=(n-1)){
              if((se[i])>=se[i+1]){
               sum=sum+se[i];
               i++;
              }
              else{
               sum=sum+se[i+1]-se[i];
               i=i+2;
             }
            }
            else{
             sum=sum+se[n-1];
             i++;
            }
        }
            return sum;
    
             // for(int i=0;i<n;i++){
            //     if(i!=n-1){
            //     if(se[i]>=se[i+1])
            //     sum=sum+se[i];
            //     else
            //     sum=sum-se[i];
            //     }
            //     else
            //     return sum+se[i];
            // }
            // return sum;
        }
    };
    