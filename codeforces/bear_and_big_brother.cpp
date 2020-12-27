#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    
    int new_a=a, new_b=b, count=0;
    
    while(!(new_a > new_b)){
        new_a = new_a*3;
        new_b = new_b*2;
        count++;
    }
    
    cout << count << endl;
    
    return 0;
}
