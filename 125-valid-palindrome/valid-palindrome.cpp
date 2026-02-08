class Solution {
public:
bool isValid(char ch){
    if(('A'<=ch && ch<='Z') || ('a'<=ch && ch<='z') || ('0'<=ch && ch<='9')){
        return true;
    }
    return false;  
}
    bool isPalindrome(string s) {
      int st = 0;
      int end = s.size()-1;
      if(s == " "){
        return true;
      }
        
     while(st<end){
        while(st<end && !isValid(s[st])){
            st++;
            continue;
            }
            while(st<end && !isValid(s[end])){
            end--;
            continue;
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