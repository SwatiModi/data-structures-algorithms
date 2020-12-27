#include <bits/stdc++.h>
using namespace std;

int n, maxl = 1, maxg = 1;

int main() {
    cin>>n;
    int a[n];
    
    for (int i=0; i<n; i++) {
       cin >> a[i];
      if (i>0){
         if(a[i] >= a[i-1]){
            maxl++;
            maxg = max(maxl, maxg);
         }
         else
            maxl = 1;
      }
    }
    
    cout << maxg << endl;
    
    return 0;
}
