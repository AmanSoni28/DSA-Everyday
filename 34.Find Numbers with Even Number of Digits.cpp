// topic link : https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/?envType=daily-question&envId=2025-04-30

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
          string s;
          s=to_string(nums[i]);
          if(s.length()%2==0)
          count++;
        }
        return count;
    }
};
// or
//<------------IMP: log Property--------->
// class Solution {
// public:
//     int findNumbers(vector<int>& nums) {
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//           int digit=1;
//            digit=digit+log10(nums[i]);
//           if(digit%2==0)
//           count++;
//         }
//         return count;
//     }
// };