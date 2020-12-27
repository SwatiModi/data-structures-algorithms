class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int sum = 0;
        
        int i = a.length()-1;
        int j = b.length()-1;
    
        while(i>=0 || j>=0 || sum==1){
            // add a's digit if it exists
            if(i>=0)
                sum +=a[i] - '0';
            if(j>=0)
                sum +=b[j] - '0';
            
            result = char(sum%2  + '0') + result;
            sum /= 2;
            i--; j--; 
        }
    return result;
    }
};


class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        string ans;
        while (i >= 0 && j >= 0) {
            int sum = a[i] - '0' + b[j] - '0' + carry;
            ans += '0' + (sum > 1 ? sum - 2 : sum);
            carry = sum > 1;
            --i; --j;
        }

        while (i >= 0) {
            int sum = a[i] - '0' + carry;
            ans += '0' + (sum > 1 ? sum - 2 : sum);
            carry = sum > 1;
            --i;
        }

        while (j >= 0) {
            int sum = b[j] - '0' + carry;
            ans += '0' + (sum > 1 ? sum - 2 : sum);
            carry = sum > 1;
            --j;
        }

        if (carry > 0) {
            ans += '1';
        }

        std::reverse(ans.begin(), ans.end());

        return ans;
    }
};