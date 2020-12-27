#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag=true;
    int digit;
    
    if((n%4==0) || (n%7==0)){
        cout << "YES" << endl;
        return 0;
    }
    else if(digit%47 == 0){
        cout << "YES" << endl;
        return 0;
    }
          
    while(n%10){
        digit = n%10;
        n = n/10;
        if((digit != 4) && (digit != 7))
            flag=false;
    }
    
     if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}


   
