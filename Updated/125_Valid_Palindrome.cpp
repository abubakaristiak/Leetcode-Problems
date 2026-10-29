class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()<1){
            return false;
        }
        string res="";
        int n=s.length();
        for(int i=0; i<n; i++){
            if(s[i]>='a' && s[i]<='z'){
                res+=s[i];
            }else if(s[i]>='A' && s[i]<='Z'){
                res+=s[i]+32;
            }else if(s[i]>='0' && s[i]<='9'){
                res+=s[i];
            }
        }
        int i=0, j=res.length()-1;
        while(i<j){
            if(res[i]!=res[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};