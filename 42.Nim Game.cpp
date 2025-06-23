// Topic link : https://leetcode.com/problems/nim-game/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
      if(n%4==0) return false;
      else return true;
    }
};