#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int k, w;
    long long int bill = 0, n;
    cin >> k >> n >> w;
    for(int i=1; i<=w; i++){
        bill = bill + i*k;
    }
    if(n < bill)
        cout << abs(n - bill);
    else
        cout << "0";
    
    return 0;
}
