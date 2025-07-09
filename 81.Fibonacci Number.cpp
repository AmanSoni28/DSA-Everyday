// topic Link: https://leetcode.com/problems/fibonacci-number/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {                  //T(C)=O(n),S(C)=O(1)
       int a=0,b=1,temp=0;
       if(n==0) return 0;
       if(n==1) return 1;
        for(int i=2;i<=n;i++){
            temp=a+b;
            a=b;
            b=temp;
        }
        return temp;
    }
};
// class Solution {               //T(C)=O(n),S(C)=O(n)
// public:
//     int fib(int n) {
//         vector<int>ans;
//         ans.push_back(0);
//         ans.push_back(1);
//         for(int i=2;i<=n;i++){
//             ans.push_back(ans[i-2]+ans[i-1]);
//         }
//         return ans[n];
//     }
// };