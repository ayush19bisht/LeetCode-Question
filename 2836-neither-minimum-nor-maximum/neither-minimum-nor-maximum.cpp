class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n= nums.size();
        // sort(nums.begin() , nums.end());
        // if(n <=2){
        //     return -1;
        // }
        // return nums[1];
        int max = INT_MIN;
        int min = INT_MAX;
        for(int i=0 ; i<n ; i++){
            if(nums[i]>max) max = nums[i];
            if(nums[i] < min) min = nums[i];
        }
        for(int i=0 ; i<n ; i++){
            if(nums[i] != max && nums[i]!=min){
                return nums[i];
            }
        }
        return -1;
    }
};