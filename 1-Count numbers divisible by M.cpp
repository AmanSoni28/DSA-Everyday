// topic link : https://www.geeksforgeeks.org/problems/count-numbers-divisible-by-m1524/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int countDivisibles(int A, int B, int M) {
          int count=0;
      for(int i=A;i<=B;i++)
      {
          if(i%M==0)
          count++;
          else
          continue;
      }
      return count;
      }
  };