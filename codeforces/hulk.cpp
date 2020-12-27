#include <iostream>

using namespace std;

int main()
{
    int n,st =0;
    string s;
    cin >> n;
    s.append("I hate");
    st = 0;
    
    while(--n){
        if(st==1){
            s.append(" that I hate");
            st=0;
        }
        else{
            s.append(" that I love");
            st=1;
        }
    }
    
    s.append(" it");
    
    cout << s << "\n";
   return 0; 
}
