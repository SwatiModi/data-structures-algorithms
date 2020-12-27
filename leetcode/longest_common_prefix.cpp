class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size() == 0)
            return "";
        
        if(strs.size() == 1)
            return strs[0];
        
        string ires=strs[0], fres;
        for(int i=1; i<strs.size(); i++){
            fres = "";
            for(int j=0; j<strs[i].length(); j++){
                if(ires[j]==strs[i][j] && j != strs[i].length())
                    fres += strs[0][j];
                else
                    break;
            }
            ires = fres;
        }
        
        return fres;
    }
};