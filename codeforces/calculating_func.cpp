#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    
    if(n%2==0 && n>=2)
        cout << n/2 << "\n";
    else
        cout << "-" <<  n/2 +1 << "\n";

    return 0;
}
