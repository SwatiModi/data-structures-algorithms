// //////////////////////////////////////////// Naive Solution
// #include<string>
// #include<iostream>

// using namespace std;

// bool isPalindrome(string s) {
//     int i=0,j=s.size()-1;

//     while(i<j){
//         if(s[i]!=s[j]){
//             return false;
//         }
//         ++i;
//         --j;
//     }
//     return true;
// }

// string longestPalindrome(string s){
//     int maxPalindromeStart=0, maxPalindromeLength=1;
//     for(int i=0;i<s.size();i++){
//         for(int j=i;j<s.size();j++){
//             if(j-i+1 > maxPalindromeLength){
//                if(isPalindrome(s.substr(i, j-i+1))){
//                    maxPalindromeStart = i;
//                    maxPalindromeLength = j-i+1;
//                }
//             }
//         }
//     }
//     return s.substr(maxPalindromeStart, maxPalindromeLength);
// }

// int main(){
//     string s = "ac";
//     cout<<longestPalindrome(s)<<endl;
//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////


// #include <iostream>
// using namespace std;

// bool isPalindrome(string s);

// int main(){
//     cout << isPalindrome("bab") << endl;
//     return 0;
// }

// bool isPalindrome(string s){
//     if(s.size()==1)
//         return true;
//     if(s.size()==2)
//         return s[0]==s[1]? true :false;
//     if(s[0] != s[s.length()-1])
//         return false;
//     else
//         return isPalindrome(s.substr(1, s.length()-2));
// }

/////////////////////////////////////////////////////////////////////////////////


// #include <iostream>
// #include <vector>

// using namespace std;

// vector<string> mysubstrs;

// vector<string> subSequences(string ip, string op);
// bool isPalindrome(string s);

// string longestSubStr = "";

// int main(){
//     vector<string> substrings = subSequences("aacabdkacaa", "");
//     int maxPalindromeLength=0;
//     // cout << substrings.size() << endl;
//     for(int i=0; i < substrings.size()-1; i++){
//         // cout << substrings[i] << endl;
//         // cout << substrings[i].length() << " " << maxPalindromeLength <<  endl;
//         if(substrings[i].length() > maxPalindromeLength){
//             if(isPalindrome(substrings[i])){
//                 // cout << "HERE\n" ;
//                 maxPalindromeLength = substrings[i].length();
//                 longestSubStr = substrings[i];
//             }
//         }
//     }
//     cout << longestSubStr << endl;
//     return 0;
// }

// // This generates subsequences but I need subarrays, Hence i get wrong answer on
// // Input
// // "aacabdkacaa"
// // Output
// // "aacabacaa"
// // Expected
// // "aca"
// vector<string> subSequences(string ip, string op){
//     if(ip.size()==0){
//         // cout << op << endl;
//         mysubstrs.push_back(op);
//         return mysubstrs;
//     }
//     // Exclude the first character
//     subSequences(ip.substr(1), op);
//     // Include the first character
//     subSequences(ip.substr(1), op + ip[0]);

//     return mysubstrs;
// }

// bool isPalindrome(string s){
//     if(s.size()==1)
//         return true;
//     if(s.size()==2)
//         return s[0]==s[1]? true :false;
//     if(s[0] != s[s.length()-1])
//         return false;
//     else
//         return isPalindrome(s.substr(1, s.length()-2));
// }

///////////////////////////////////////////////////////////////////////
// #include <iostream>
// #include <vector>

// using namespace std;

// string str = "bacabab";
// int maxi=0, maxlen = 1;

// int n = str.length();
// int dp[100][100];

// int main(){

//     // single char strs
//     for(int i=0; i<n; i++){
//         dp[i][i]=1;
//     }    

//     // two char strs
//     for(int i=0; i<n-1; ++i){
//         if(str[i]==str[i+1]){
//             dp[i][i+1]=1;
//             maxlen =2;
//             maxi = i;
//         }
//     }    

//     int j;
//     for(int k=3; k<=n; ++k){
//         for(int i=0; i<n-k+1; ++i){
//             j = i + k - 1;
//             // cout << i << ' ' << j << endl;
//             // cout << s << " \n" ;
//             if(str[i]==str[j] && dp[i+1][j-1]){
//                 dp[i][j]=1;
//                 if (k> maxlen){
//                     maxi = i;
//                     maxlen = j-i+1;
//                 }   
//             }
//         }
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << dp[i][j] << " ";
//         }
//         cout << "\n";
//     }

//     cout << str.substr(maxi, maxlen) << endl;
    
// }   

class Solution {
public:
    string longestPalindrome(string s) {
        int maxi=0, maxlen = 1;
        int n = s.length();
        vector<vector<int>> dp(n,vector<int>(n,0));
        
        // single char strs
        for(int i=0; i<n; i++){
            dp[i][i]=1;
        }    

        // two char strs
        for(int i=0; i<n-1; ++i){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                maxlen =2;
                maxi = i;
            }
        }    

        int j;
        for(int k=3; k<=n; ++k){
            for(int i=0; i<n-k+1; ++i){
                j = i + k - 1;
                if(s[i]==s[j] && dp[i+1][j-1]==1){
                    dp[i][j]=1;
                    if (k> maxlen){
                        maxi = i;
                        maxlen = j-i+1;
                    }   
                }
            }
        }
        
    return s.substr(maxi, maxlen);
    }
};