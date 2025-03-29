// topic link : https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> findTwoElement(vector<int>& arr) {
      int n=arr.size(),a,b,p=0,c=0;
      vector<int>vec;
        sort(arr.begin(),arr.end());
        for(int i=1;i<=n;i++)
        {
               p=0;
             for(int j=0;j<n;j++)
        {
            if(i==arr[j])
            {
            p++;
            }
        }
        if(p==0)
        {
        a=i;
        break;
        }
        }
        
        for(int i=0;i<n;i++)
        {
            c=0;
          for(int j=0;j<n;j++)
         {
            if(arr[i]==arr[j])
            c++;
            if(c==2){
            b=arr[i];
            break;
            }
         }
         if(c==2){
            b=arr[i];
            break;
            }
        }
      vec.push_back(b);
      vec.push_back(a);
      return vec;
      }
  };                                                                