#include <iostream>

using namespace std;

int main()
{
   string s;
   cin >> s;
   int l=0, u=0;
   
   for(int i=0; i<s.length(); i++){
       if(islower(s[i]))
            l++;
        else
            u++;
   }
   
   if(l>=u){
       for(int i=0; i<s.length(); i++){
            if(isupper(s[i]))
                s[i] = s[i] + 32;
        }
   }
    else{
        for(int i=0; i<s.length(); i++){
            if(islower(s[i]))
                s[i] = s[i] - 32;
        }
    }
    
    cout << s << endl;
   
   return 0;
}
