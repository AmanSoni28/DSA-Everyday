// Topic Link : https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char kthCharacter(int k) {          //T(c)=O(k)  
        string str="a";
        for(int i=0;i<10;i++){         //because 1<=k<=500, string with 500 char generate in 10 time 
            int n=str.length();
            for(int j=0;j<n;j++){
                if(str[j]=='z')
                str+='a';
                else
                str+=char(str[j]+1);       //for next charecter
                if(str.length()>=k)
                return str[k-1];
            }
        }
        return 'a';
    }
};

// class Solution {                    //T(c)=O(k) 
// public:
//     char kthCharacter(int k) {
//         string str="a";
//         if(k==1) return 'a';
//         for(int i=0;i<10;i++){ 
//             for(int j=0;j<pow(2,i);j++){
//                 if(str[j]=='z')
//                 str+='a';
//                 else
//                 str+=char(int(str[j])+1);       
//                 if(str.length()>=k)
//                 return str[k-1];
//             }
//         }
//         return 'a';
//     }
// };