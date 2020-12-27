#include <iostream>

using namespace std;
bool place_is_odd(int a, int b);

int main()
{
    int n;
    int a,b,c;
    cin >> n;
    int xsum =0, ysum=0, zsum=0;
    
    while(n--){
        
        cin >> a >> b >> c;
        xsum = xsum + a ;
        ysum = ysum + a ;
        zsum = zsum + a ;
    }
    
    if(xsum == 0 && ysum==0 && zsum==0)
        cout << "YES" ;
    else 
        cout << "NO";
    return 0;
}

// had missed the part in problem statement hinting that directly sum of all vectors is not the answer, we have to see if all vectors in x y z are in equilibrium
