
#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{ 
    int  i,k,m,j,ln,ck,n;
     string arr;
     cin>>arr;
      
     int a = atoi(arr.c_str());
     ln = arr.length();
      
     ck=0;
     for(i=0;i<ln;i++){
          if(arr[i]=='4' || arr[i]=='7'){
               ck++;
          }
         
     }
     if(ck==ln){
          cout<<"YES"<<endl;
     }
     else if(a % 4 == 0 || a % 7 == 0){
          cout<<"YES"<<endl;
     }
     else if(a % 47 == 0){
          cout<<"YES"<<endl;
     }
     else {
          cout<<"NO"<<endl;
     }

}

