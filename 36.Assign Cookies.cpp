// topic link: https://leetcode.com/problems/assign-cookies/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0;
        for(int i=0 ,j=0; i<g.size() && j<s.size(); ){
           if(g[i]==s[j]){
            count++;
            i++;j++;
           }
           else if(g[i]>s[j]){
             j++;
           }
           else {
            count++;
            i++;j++;
           }
        }
      return count;
    }
};