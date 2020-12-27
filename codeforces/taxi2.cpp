#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,taxi;
int sum;

int main()
{
   cin >> n;
   int j=n-1;
   int a[n];
   
   for (int i=0; i<n; i++){
      cin >> a[i];
   }
   
  sort(a, a+n, greater<int>()); 
   
   for (int i=0; i<n; i++){
      sum = a[i] + a[n-1];
      if(sum <= 4){
         taxi++;
         n--;
         while(sum + a[n-1] <= 4){
            n--;
            sum = sum + a[n-1];
         }
      }
      else
         taxi++;
   }
   
   cout << taxi << endl;
   return 0;
}
