#include <iostream>

using namespace std;

int main()
{
   int n,t;
   cin >> n >> t;
   string q;
   cin >> q;
   char temp;
   
   while(t--){
       for(int i=0; q[i]!='\0'; i++){
           if(q[i]=='B' && q[i+1]=='G'){
                temp = q[i];
                q[i] = q[i+1];
                q[i+1] = temp;
                i ++;
           }
       }
   }
   
    cout << q << endl;
   return 0;
}
