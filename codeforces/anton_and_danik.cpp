#include <iostream>
using namespace std;

int a,d,l;
string c;

int main()
{
   cin >> l;
   cin >> c;
   
   for(int i=0; c[i]!='\0'; i++){
      if(c[i] == 'A')
         a++;
      else 
         d++;
   }
   
   if(a>d)
      cout << "Anton" << endl;
   else if(a<d)
      cout << "Danik" << endl;
   else 
      cout << "Friendship" << endl;
   return 0;
}
