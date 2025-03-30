// topic link : https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
     sort(arr.begin(),arr.end());
    int n=arr.size(),a,b;
    vector<int>vec;
      for(int i=1;i<=n;i++)
      {
          if(i!=n){
            if(i==arr[i-1]||i==arr[i]) 
            continue;
            else
            a=i;
            break;
          }
          else
          {
            if(i==arr[i-1])
            continue;
            else
            a=i;
            break;
          }
      }
      
      for(int i=0;i<n;i++)
      {
           if(arr[i]==arr[i+1]){
              b=arr[i];
              break;
          }
      }
    vec.push_back(b);
    vec.push_back(a);
    return vec;
    }
};