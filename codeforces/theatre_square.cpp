#include <iostream>

using namespace std;

int main()
{
    int w,h,a,c=0;
    cin >> w >> h >> a;
    while(w>0 || h>0){
        if(w-a){
            w-=a;
            c++;
        }
        if(h-a){
            h-=a;
            c++;
        }
    }
    
    cout << c << endl;
    return 0;
}
