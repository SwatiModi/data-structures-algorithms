#include <iostream>

using namespace std;
bool place_is_odd(int a, int b);

int main()
{
    int x,y;
    cin >> x >> y;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            char sym;
            cin >> sym;
            if(sym == '.')
            {
                if(place_is_odd(i,j))
                    cout << 'B';
                else 
                    cout << "W";
            }
            else
                cout << "-" ;
        }
        cout << "\n";
    }
    return 0;
};

bool place_is_odd(int a, int b){
    if((a+1+b+1)%2 == 0)
        return true;
    else 
        return false;
};
