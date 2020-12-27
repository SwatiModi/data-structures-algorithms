#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s = "abaabd";
    int n = s.length();
    int dp[n][n];
    int c=0;

    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            if(i==j){
                dp[i][j] =1;
                c++;
            }
            else if(i+1 == j && s[i]==s[j]){
                dp[i][j] =1;
                c++;
            }
            else
                dp[i][j] =0;
        }
    }

    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            if(j>i+1 && s[i]==s[j] && dp[i+1][j-1]==1){
                dp[i][j]=1;
                c++;
            }
        }
    }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << dp[i][j] << " " ;
    //     }
    //     cout << "\n";
    // }

    // cout << c << endl;

    return 0;
}

///////////////////////////////////////////////////////////////
class Solution {
public:
    int countSubstrings(string s) {
    
    int n = s.length();
    int dp[n][n];
    int c=0;

    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            if(i==j){
                dp[i][j] =1;
                c++;
            }
            else if(i+1 == j && s[i]==s[j]){
                dp[i][j] =1;
                c++;
            }
            else
                dp[i][j] =0;
        }
    }

    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            if(j>i+1 && s[i]==s[j] && dp[i+1][j-1]==1){
                dp[i][j]=1;
                c++;
            }
        }
    }
        
    return c;
    }
};