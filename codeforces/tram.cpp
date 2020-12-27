#include <iostream>

using namespace std;

int main()
{
   int stops;
   cin >> stops;
   
   int max=0, curr=0;
   int a,b;
   
   while(stops--){
       
       cin >> a >> b;
       curr = curr - a + b;
       if (curr > max)
            max = curr;
   }
   
   cout << max <<  endl; 
   return 0;
}
