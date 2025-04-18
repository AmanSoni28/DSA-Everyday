// topic link :https://leetcode.com/problems/container-with-most-water/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxArea(vector<int>& height) {
            int n=height.size();
            //Using Two Pointer T(c)=>O(n)
    
            int area=0,newArea;
            int start=0,end=n-1;
    
            while(start<end){
            int minHeight= min(height[start],height[end]);
                newArea=(end-start)*minHeight;
                area=max(area,newArea); 
                height[start]<height[end] ? start++ : end--;
            }
    
            //Brute Force t(c)=>O(n^2) but TLE
        
            // int area=0,newArea;
            // for(int i=0;i<n;i++){
            //     for(int j=i+1;j<n;j++){
            //         int minHeight= min(height[i],height[j]);
            //         newArea=minHeight*(j-i);
            //         area=max(area,newArea);
            //     }
            // }
            return area;
        }
    };