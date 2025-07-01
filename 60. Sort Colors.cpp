// Topic Link: https://leetcode.com/problems/sort-colors/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
     int n=nums.size();          // Dutch National Flag Algorithm T(c)=>(n)
     int L=0,R=n-1,M=0;
     while(M<=R){
        if(nums[M]==0){
            swap(nums[L],nums[M]);
            M++;
            L++;
        }    
        else if(nums[M]==1){
            M++;
        }
        else{
            swap(nums[M],nums[R]);
            R--;
        }
     }

        

    // int L=0,R=(n-1),c=0;             //  Using Two Pointer 
    //     while(L<=R)
    // {
    //     if(nums[L]==0 || nums[L]==1)
    //     L++;
    //     else 
    //     {
    //     swap(nums[L],nums[R]);
    //     R--;
    //     c++;
    //     }
    // }   
    // L=0,R=(n-1)-c;
    //     while(L<R)
    // {
    //     if(nums[L]==0)
    //     L++;
    //     else 
    //     {
    //     swap(nums[L],nums[R]);
    //     R--;
    //     }
    // }  
    }
};