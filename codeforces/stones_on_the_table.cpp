// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     char s[n];
//     cin >> s;
//     char base = s[0];
//     bool reached_end = true;
//     for(int i=1; s[i]!='\0'; i++){
//         if(!(s[i] == base)){
//             cout << i-1 <<endl;
//             reached_end = false;
//         }
//     }
//     if(reached_end)
//         cout << n-1 << endl;
    
//     return 0;
// }

#include <iostream>
#include<string>
using namespace std;

int main() {
 int n;
 cin>>n;
 string s;
 cin>>s;
 int r=0;
 int g=0;
 int b=0;
 for(int i=1;i<n;i++){
 	if(s[i-1]==s[i]){
 	if(s[i]=='R')++r;
 	else if(s[i]=='G'){
 		++g;
 	}
 	else if(s[i]=='B')
 	++b;
 }}
 cout<<r+g+b;
  	return 0;
}
