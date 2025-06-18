// topic link:https://leetcode.com/problems/valid-perfect-square/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPerfectSquare(int num) {
       int st=1,end=num;            // T(c)=>O(log(n)
       while(st<=end){
        long int mid=st+(end-st)/2;
        if(mid*mid==num)
        return true;
        else if(mid*mid<num)
        st=mid+1;
        else
        end=mid-1;
       }
       return false;

    // Brute Force T(c)=>O(sqrt(n))
    //     if(num==1)
    //     return true;
    //    for(int i=1;i<=sqrt(num);i++){
    //       if(i*i==num)
    //       return true;
    //    }
    //    return false;
    }
};