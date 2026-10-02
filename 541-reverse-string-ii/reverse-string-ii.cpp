class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.size() < k){
            reverse(s.begin() , s.end());
            return s;
        }
        
        reverse(s.begin() , s.begin()+k);
        
        for(int i=2*k ; i<s.size() ; i+=2*k){
            reverse(s.begin()+i , s.begin()+ min( i+k ,(int) s.size()));
        }
        return s;
    }
};