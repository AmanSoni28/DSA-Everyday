// Topic link: https://www.geeksforgeeks.org/problems/binary-number-to-decimal-number3525/1?utm_medium=article&utm_campaign=bottom_sticky_on_article&utm_source=gfg

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int binaryToDecimal(string &b) {
        int n=b.length();
        int sum=0, j=0;
        for(int i=n-1;i>=0;i--){
            sum=sum+(b[i]-'0')*pow(2,j);
            j++;
        }
        return sum;
    }
};