#include <iostream>
#include <set>

using namespace std;
int color;
set<int> hshoes;

int main()
{   
    for(int i=0; i<4; i++){
        cin >> color;
        hshoes.insert(color);
    }
    
    cout << 4-hshoes.size();
}
