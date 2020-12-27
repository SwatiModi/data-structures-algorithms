#include <iostream>
#include <cmath>
using namespace std;

string s,t;

int main()
{
   cin >> s;
   cin >> t;
   int l = s.length();
   bool flag = true;
      
   for(int i=0; i<l; i++){
      if(t[i]!=s[l-i-1])
         flag=false;
   }
   
   if(flag)
      cout << "YES" << endl; 
   else
      cout << "NO" << endl; 
      
   return 0;
}
