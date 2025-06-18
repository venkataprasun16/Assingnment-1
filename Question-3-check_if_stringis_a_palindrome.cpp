#include <bits/stdc++.h>
bool checkPalindrome(string s)
{
   string check="";
   for(int i=0;i<s.size();i++){
       if(s[i]>=65 && s[i]<=90) s[i]+=32;
       if(isalnum(s[i])){
           check+=s[i];
       }
   }
   int len=check.size();
   int count=0;
   for(int i=0;i<len/2;i++){
       if(check[i]==check[len-i-1]) count++;
   }
   return count==len/2;
}