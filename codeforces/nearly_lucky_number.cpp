#include <iostream>

using namespace std;

int main()
{
   long long int n;
   int c=0;
   cin >> n;

   while(n){
       if(n%10 == 4 || n%10 == 7)
            c++;
       n = n/10;
   }
   
   if(c==4 || c==7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
   return 0;
}
