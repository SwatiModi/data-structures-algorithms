#include <iostream>
#include <string.h>

using namespace std;

int main()
{
   char c[100];
   char dist[100];
   cin >> c;
   int j=1;
   dist[0] = c[0];
   
   for(int i=1; c[i]!='\0'; i++){
       if(strchr(dist, c[i]) == NULL){
           dist[j] = c[i];
           j++;
       }
   }
   
   cout << dist << endl;

    if(j%2==1)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
   return 0;
}
