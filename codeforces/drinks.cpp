#include <iostream>
#include <limits>

using namespace std;
int n,p;
double ans;

int main()
{
   cin >> n;
   for(int i=0;i<n; i++){
       cin >> p;
       ans +=p;
   }
   
   cout.precision(15);
   cout << ans/n << endl;
   
   return 0;
}
