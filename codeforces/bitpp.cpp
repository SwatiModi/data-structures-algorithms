#include <iostream>

using namespace std;

int main()
{
    int num_lines;
    int x=0;
    string plus ("++");
    string minus ("--");
    cin >> num_lines;
    while(num_lines--){
        string line;
        cin >> line;
        if (line.find(plus) != string::npos) {
            x++;
        } 
        else if (line.find(minus) != string::npos) {
            x--;
        } 
    }
    cout << x << endl;
}


