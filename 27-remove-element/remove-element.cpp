class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int st = 0;
        int end = nums.size()-1;
        while(st<=end){
            if(nums[st] == val){
                swap(nums[st] , nums[end]);
                end--;
            }
            else{
                st++;
            }
        }
        return st;
    }
};