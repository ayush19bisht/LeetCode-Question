class Solution {
public:
bool isValid(char ch){
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return true;
    }
    return false;
}
    bool isPalindrome(string s) {
        int st = 0;
        int end = s.size()-1;
        while(st<end){
            while(st<end && !isValid(s[st])){
                st++;
            }
            while(st<end && !isValid(s[end])){
                end--;
            }
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};