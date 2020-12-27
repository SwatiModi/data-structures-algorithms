#include <iostream>

using namespace std;
bool isVowel(char x);

int main()
{
    string a;
    cin >> a;
    int n = a.length(); 
  
    string updatedString = ""; 
  
    for (int i = 0; i < n; i++) { 
       a[i] = tolower(a[i]);
    
        if(!isVowel(a[i])){
            updatedString = updatedString + "." + a[i];
        }
       
    }
    
    cout << updatedString << endl;
   return 0;
}

bool isVowel(char x) 
{ 
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y') 
        return true; 
    else
        return false; 
} 
