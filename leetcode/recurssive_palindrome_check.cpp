#include <iostream>
using namespace std;

bool isPalindrome(string s);

int main(){
    cout << isPalindrome("aa") << endl;
    return 0;
}

bool isPalindrome(string s){
    if(s.size()==1)
        return true;
    if(s.length()==2)
        return s[0]==s[1] ? true: false;
    if(s[0] != s[s.size()-1])
        return false;
    else
        return isPalindrome(s.substr(1, s.length()-2));
}