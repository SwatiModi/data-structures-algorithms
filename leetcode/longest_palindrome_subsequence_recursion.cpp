class Solution {
public:
    
    vector<string> mysubstrs;
    string longestSubStr = "";
    
    int longestPalindromeSubseq(string s) {
        vector<string> substrings = subSequences(s, "");
        int maxPalindromeLength=0;
        for(int i=0; i < substrings.size()-1; i++){
            if(substrings[i].length() > maxPalindromeLength){
                if(isPalindrome(substrings[i])){
                    maxPalindromeLength = substrings[i].length();
                    longestSubStr = substrings[i];
                }
            }
        }
        return maxPalindromeLength;
    }
    
    vector<string> subSequences(string ip, string op){
        if(ip.size()==0){
            mysubstrs.push_back(op);
            return mysubstrs;
        }
        // Include the first character
        subSequences(ip.substr(1), op + ip[0]);
        // Exclude the first character
        subSequences(ip.substr(1), op);

        return mysubstrs;
    }

    bool isPalindrome(string s){
    if(s.size()==1)
        return true;
    if(s.size()==2)
        return s[0]==s[1]? true :false;
    if(s[0] != s[s.length()-1])
        return false;
    else
        return isPalindrome(s.substr(1, s.length()-2));
    }
};

//////////// TLE