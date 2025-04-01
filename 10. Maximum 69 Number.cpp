// topic link : https://leetcode.com/problems/maximum-69-number/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        int digit=0,m=num,maxi=INT_MIN,newly,rem=0,d;
        while(num>0)
        {   
            num=num/10;
            digit++;
        }
        num=m;
        for(int i=1;i<=digit;i++)
        {
            d=pow(10,i);
            rem=num%d;
            rem=rem/pow(10,(i-1));

            // if(rem%9==0){
            // newly=num-3*pow(10,i-1);
            // maxi=max(maxi,newly);
            // }
            // else {
            //     newly=num+3*pow(10,i-1);
            // maxi=max(maxi,newly);
            // }
            if(rem%6==0){
            newly=num+3*pow(10,i-1);
            maxi=max(maxi,newly);
            }
        }
        return max(maxi,num);
    }
};