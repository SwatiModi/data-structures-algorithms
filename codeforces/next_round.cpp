#include <iostream>

using namespace std;

int main()
{
    int t, k, val;
    cin >> t >> k;
    int c = 0;
    int arr[t];
    for(int i=0; i<t; i++){
        cin >> arr[i];
    }
    val = arr[k - 1];
    for(int i=0; i<t; i++){
        if(arr[i] >0 && arr[i] >=val)
            c ++;
    }
    
    cout << c << endl;
   return 0;
}
