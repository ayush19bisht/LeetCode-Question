class Solution {
public:
    string smallestPalindrome(string s) {
        int freq[26] = {0};
        for(int i=0 ; i<s.length() ; i++){
            freq[s[i] - 'a']++;
        }
        string left ="";
        string mid = "";
        for(int i=0 ; i<26 ; i++){
            if(freq[i] / 2){
               for(int j=0 ; j<freq[i] /2 ; j++){
                left += ('a' + i);
               }
            }
            if(freq[i] % 2 == 1){
                mid += ('a' + i);
            }
        }
        string right = left;
        reverse(right.begin() , right.end());
        return left + mid +right;
    }
};