class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(int i=0 ; i<nums.size() ; i++){
            s.insert(nums[i]);
        }
        int count = 0;
        int prev = 0;
        int maxcount = 0;
        for(auto x : s){
            if(count == 0){
                count = 1;
            }
            else if(x == prev+1){
                count++;
            }
            else{
                count = 1;
            }
            prev = x;
            maxcount = max(count , maxcount);
        }
        return maxcount;
    }
};