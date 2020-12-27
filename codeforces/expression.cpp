#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int maxog = 0, max;
    max = a+b*c;
    if(maxog < max)
        maxog = max;
    max = a*b+c;
    if(maxog < max)
        maxog = max;
    max = a*(b+c);
    if(maxog < max)
        maxog = max;
    max = (a+b)*c;
    if(maxog < max)
        maxog = max;
    max = a*b*c;
    if(maxog < max)
        maxog = max;
    max = a+b+c;
    if(maxog < max)
        maxog = max;
        
    cout << maxog << "\n";
    return 0;
}
