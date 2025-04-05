// topic link : https://leetcode.com/problems/count-primes/

#include<bits/stdc++.h>
using namespace std;

// T(c)=>n*log(lon(n)),S(c)=>n
class Solution {
    public:
        int countPrimes(int n) {
            int count=0;
            vector<int>vec(n,true);              //vector=> size=n, value in every index is true
            for(int i=2;i<n;i++){
                if(vec[i]==true){
                    count++;
                    for(int j=i;j<n;j=j+i){
                        vec[j]=false;
                    }
                }
            }
            return count;
        }
    };