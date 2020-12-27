#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string word;
        cin >> word;
        // cout << word.size() << endl;
        if(word.size() > 10){
            cout << word[0] + to_string(word.size()-2) + word.back() << endl;
        }
        else
            cout << word << endl;
    }
   
   return 0;
}
