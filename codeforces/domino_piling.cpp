#include <iostream>

using namespace std;

int main()
{
    int m,n, num;
    cin >> m >> n ;
    double dom_area = m*n;
    double piece_area = 2;
    num = dom_area/piece_area ;
    cout << num << endl;
   return 0;
}

