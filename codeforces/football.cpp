#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >>  s;
    string zeros = "0000000";
    string ones = "1111111";
    if (s.find(zeros) != std::string::npos || s.find(ones) != std::string::npos) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

