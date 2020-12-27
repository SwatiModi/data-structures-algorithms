#include <iostream>

using namespace std;

string in1, in2;

int main()
{
   cin >> in1;
   cin >> in2;
   
   int n = in1.length();
   
   for(int i=0; i<n; i++)
   {
        if(in1[i]==in2[i])
            cout << "0";
        else
            cout << "1";
   }
   
   return 0;
}
