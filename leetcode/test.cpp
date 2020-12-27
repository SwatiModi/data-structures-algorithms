// #include <string>
// #include <iostream>
// using namespace std;
// string s = "DeaTh is herEditarY!";

// int n = s.size();
// int c=0;

// int main(){
//     for(int i=0; i<n; i++){
//     if(s[i] >= 65 && s[i]<= 90)
//         c++;
//     }

//     cout << c<< endl;
//     return 0;
// }

// #include <string>
// #include <iostream>
// using namespace std;
// string s = "DeaTh is herEditarY!";

// int n = s.size();
// int c=0;

// int main(){
//     for(int i=0; i<n; i++){
//     if(isupper(s[i]))
//         c++;
//     }

//     cout << c<< endl;
//     return 0;
// }

// Given an array of numbers arrange it in the form of a single number such that the concluded number is
// the maximum.
// e.g. given : 99,8,76,45,66,9,7,33,5,42
// O/P : 99987766654233

// check first digit of every number and sort

#include <string>
#include <iostream>
#include <vector>

using namespace std;
string res = "";
int getmax(vector<int> arr);

int main(){

    vector<int> arr = {99,8,76,45,66,9,7,33,5,42};
    int n = arr.size();
    cout << n<< endl;

    vector<int> digitarr(n);

    for(int i=0; i<n; i++){
        digitarr[i] = arr[i]/10;
    }

    for(int i=0; i<n; i++){
        cout << digitarr[i] <<  endl;
    }

    int temp = 0;

    for(int i = 0; i<n; i++){
        res = res + to_string(getmax(arr));
    }
    
    int getmax(vector<int> arr){
        int maxx = 0
        for(int i=0; i<arr.size(); i++ ){
            if(max<arr[i])
                maxx = arr[i];
        }
        return maxx;
    }

    return 0;
}
