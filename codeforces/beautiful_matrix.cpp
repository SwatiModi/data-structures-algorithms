#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int mat[5][5];
    int ini_x, ini_y;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 1){
                ini_x = i;
                ini_y = j;
            }
        }
    }
    cout << abs(ini_x -2 ) + abs(ini_y - 2) << endl;
}


