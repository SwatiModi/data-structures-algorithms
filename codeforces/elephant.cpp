#include <iostream>

using namespace std;

int main()
{
   int n,c = 0;
   cin >> n;
   
   while(n){
   if(n-5 >= 0){
        n = n - 5;
       c++ ;
   }
    else if(n-4 >= 0){
        n = n-4;
        c++ ;
   }
   else if(n-3 >= 0){
        n = n-3;
        c++ ;
   }
    else if(n-2 >= 0){
        n = n-2;
        c++ ;
   }
   else if(n-1 >= 0){
        n = n-1;
        c++ ;
   }
   }
    cout << c << endl;
   return 0;
}
