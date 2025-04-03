// topic link : https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
     sort(arr.begin(),arr.end());
    int n=arr.size(),a,b;
    vector<int>vec;
  
      for(int i=0;i<n;i++)
      {
           if(arr[i]==arr[i+1]){      //for repeating
              b=arr[i];
              break;
          }
      }
      
      int sum=0,nanuralSum=0;
      
       for(int i=0;i<n;i++){               //for missing
        sum=sum+arr[i];
        nanuralSum=nanuralSum+(i+1);
        }
      int finalSum = sum-b;
      a=nanuralSum-finalSum;
      
    vec.push_back(b);
    vec.push_back(a);
    return vec;
    }
};