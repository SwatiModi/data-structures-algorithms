#include <iostream>
using namespace std;

int t,p,q,rooms;

int main()
{
   cin >> t;
   
   while(t--){
      cin >> p >> q;
      if(q-p >= 2)
         rooms++;
   }
   cout << rooms << endl;
   return 0;
}
