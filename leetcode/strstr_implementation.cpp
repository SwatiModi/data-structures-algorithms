class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty())
            return 0;
        if (haystack.empty() || needle.size() > haystack.size())
            return -1;
        int j = 0;
        for(int i = 0; i <= haystack.size() - needle.size(); i++){
            for(j=0; j<needle.size();j++){
                if (needle[j] != haystack[i+j]){
                    break;
                }
            }
            if (j == needle.size()){
                return i;
            }
        }
        return -1;
    }
};