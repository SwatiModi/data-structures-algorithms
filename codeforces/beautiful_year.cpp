#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,d;
    bool done=false;
    cin >> n;
    
    while(!done){
        n++;
        a = n/1000;
        b = (n/100)%10;
        c = (n/10)%10;
        d = n%10;
        if(b != a && c!=a && c!=b && d!=c && d!=b && d!=a)
            done = true;
    }
    
    cout << n;
   return 0; 
}
