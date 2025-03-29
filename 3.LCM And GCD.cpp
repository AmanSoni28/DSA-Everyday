//    topic link : https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1?page=1

#include<bits/stdc++.h>
using namespace std;

  class Solution {
    public:
      vector<int> lcmAndGcd(int a, int b) {
          vector<int>vec;
          int n=min(a,b),c;
          for(int i=1;i<=n;i++)
          {
              if(a%i==0 && b%i==0)
              c=i;
          }
          
           int LCM = (a * b)/c;               //LCM(a, b) * GCD(a, b) = a * b
           
          vec.push_back(LCM);
          vec.push_back(c);
         
          return vec;
          
      }
  };                                           