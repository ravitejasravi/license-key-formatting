class Solution {
public:
    string licenseKeyFormatting(string s, int k) {

        string result = "";
        string license = "";
        int i, count = 0;
        
        for(i = 0; i < s.length(); i++) {
            if(s[i] != '-')
                result += s[i];
        }

        for(i = result.length()-1; i >= 0; i--) {
            
            if(count == k) {
                license += '-';
                count = 0;
            }
            
            if(result[i] > 96)
                license += (result[i] - 32);
            else
                license += result[i];

            count += 1;
            
        }

        reverse(license.begin(), license.end());
        return license;
    }
};