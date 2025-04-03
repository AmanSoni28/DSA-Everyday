// topic link : https://leetcode.com/problems/maximum-69-number/description/

#include<bits/stdc++.h>
using namespace std;

// Approach 1 : T(c)=>O(log(n))
class Solution {
    public:
        int maximum69Number (int num) {
            int digit=0,m=num,newly,rem=0,d;
            while(num>0)
            {   
                num=num/10;
                digit++;
            }
            num=m;
            for(int i=digit;i<=digit;i--)
            {
                d=pow(10,i);
                rem=num%d;
                rem=rem/pow(10,(i-1));

                if(rem%6==0){
                newly=num+3*pow(10,i-1);
                break;
                }
            }
            return max(newly,num);
        }
    };

//* Approach 2: using string,   (best approach)
class Solution {
    public:
        int maximum69Number(int num) { 
            string s = to_string(num);                 //to_strin=> convert to string
            
            for (int i = 0; i < s.size(); i++) {  
                if (s[i] == '6') { 
                    s[i] = '9';  
                    break;  
                }
            }
    
            return stoi(s);                  //stoi=> use to convert string to integer
        }  
    };


// Approach 3 (T(c)=o(n)) : using vector
class Solution {       
    public:  
        int maximum69Number (int num) { 
            vector<int>ans; int sum=0;
           while(num>0){
        ans.push_back(num%10);
          num=num/10;
           } 
           reverse(ans.begin(),ans.end());          
          for(int i=0;i<ans.size();i++){     
            if(ans[i]==6){
                ans[i]=9;
                break;
            }   
          }
          for(int i=0;i<ans.size();i++){ 
            sum=sum*10+ans[i];
          
          } return sum;
        
        }  
    }; 
    
// Approach 4: T(c)=>O(log(n))
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
    
                if(rem%6==0){
                newly=num+3*pow(10,i-1);
                maxi=max(maxi,newly);
                }
            }
            return max(maxi,num);
        }
    };