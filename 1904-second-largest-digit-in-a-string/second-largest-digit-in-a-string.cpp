class Solution {
public:
    int secondHighest(string s) {
        int large=INT_MIN;
        int seclarge = INT_MIN;
        for(int i=0; i<s.length(); i++){
            if(isdigit(s[i])){
                int dig = s[i]-'0';
                if(dig>large){
                    seclarge=large;
                    large=dig;
                }else if(dig>seclarge && dig<large){
                    seclarge = dig;
                }
            }
        }
        if(seclarge==INT_MIN){
            return -1;
        }
        return seclarge;
    }

};