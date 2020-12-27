#include <iostream>

using namespace std;

int main()
{
    int t;
    int probs =0; 
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if((a+b+c) >=2)
            probs++;
    }
    
    cout << probs << endl;
   return 0;
}
