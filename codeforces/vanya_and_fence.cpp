#include <iostream>
#include <cmath>
using namespace std;

int n;
double h,a;
int width;

int main()
{
   cin >> n >> h;
   while(n--){
      cin >> a;
      width += ceil(a/h);
   }
   
   cout << width << endl;
   
   return 0;
}
