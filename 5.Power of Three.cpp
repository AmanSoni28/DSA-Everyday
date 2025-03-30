// topic link : https://leetcode.com/problems/power-of-three/

class Solution {
    public:
        bool isPowerOfThree(int n) {
         int m=n;
        if(n<=0)
        return false;
        if(n==1)
        return true;
    
         for(int i=1;i<=m/3;i++)
         {
            if(n%3==0)
            {
                n=n/3;
                if(n==1)
                return true;
            }
            else 
            return false;
         }
         return false;  
        }
    };