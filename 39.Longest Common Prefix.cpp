// topic link:https://leetcode.com/problems/longest-common-prefix/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
   
  for (int i = 0; i < strs[0].length(); ++i) {
        for (int j = 1; j < strs.size(); ++j) {
            if (i >= strs[j].length() || strs[j][i] != strs[0][i]) 
                return strs[0].substr(0, i);
        }
    }
    return strs[0];
    }
};
