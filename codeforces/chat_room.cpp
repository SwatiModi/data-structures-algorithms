#include <iostream>

using namespace std;

int main()
{
    string name;
    cin >> name;
    
    int found = 0;
    int l = name.length();

    for(int i=0; i<l; i++){
        if(name[i] == 'h' && found == 0){
            found ++;
        }
        else if(name[i] == 'e' && found == 1){
            found ++;
        }
        else if(name[i] == 'l' && found == 2){
            found ++;
        }
        else if(name[i] == 'l' && found == 3){
            found ++;
        }
        else if(name[i] == 'o' && found == 4){
            found ++;
        }
        
        if(found == 5){
            cout << "YES" <<  endl;
            break;
        }
    }
    
    if(found<5)
        cout << "NO" << endl;
    
    return 0;
}
