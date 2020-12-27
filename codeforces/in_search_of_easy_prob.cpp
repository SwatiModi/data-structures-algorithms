#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin >> n;
    
    while(n--){
        cin >> a;
        if(a==1){
            cout << "HARD\n";
            return 0;
        }
    }
    cout << "EASY\n";
   return 0; 
}
