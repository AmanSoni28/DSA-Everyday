// topic link : https://leetcode.com/problems/find-the-difference/description/

#include<bits/stdc++.h>
using namespace std;

//using ASCII Value => best approach 
class Solution {
    public:
        char findTheDifference(string s, string t) {
            int n=s.size(),m=t.size(); 
            int ssum=0,tsum=0;
            for(int i=0;i<n;i++)
            {
                ssum=ssum+int(s[i]);                          
            }
            for(int i=0;i<m;i++)
            {
                tsum=tsum+int(t[i]);
            }
            return ((char)(tsum-ssum));   
        }
    };

    // using sorting
class Solution {
    public:
        char findTheDifference(string s, string t) {
            int n=s.size(),m=t.size();
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            for(int i=0;i<n;i++)
            {
                if(s[i]!=t[i])
                return t[i];
            }
            return t[m-1];
        }
    };