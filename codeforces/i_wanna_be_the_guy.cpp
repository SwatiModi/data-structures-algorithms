#include <iostream>
#include <set>

using namespace std;
int n, p, q, num;
set<int> levels;

int main()
{   
    cin >> n;
    cin >> p;
    for(int i=0; i<p; i++){
        cin >> num;
        levels.insert(num);
    }
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> num;
        levels.insert(num);
    }
    
    if(levels.size() == n)
        cout << "I become the guy.";
    else 
        cout << "Oh, my keyboard!";
}
