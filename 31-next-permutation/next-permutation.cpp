class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;
        for(int i = n-2 ; i>=0 ; i--){    //  step 1 find pivot
            if(nums[i] < nums[i+1]){
                pivot = i ;
                break;
            }
        }
        //  step 2 if no pivot reverse the whole array
        if(pivot == -1){
            reverse(nums.begin() , nums.end());
            return;
        }

        //step3 find smallest no greater than pivot
        for(int i = n-1 ; i>pivot ; i--){
            if(nums[i] > nums[pivot]){
                swap(nums[i] , nums[pivot]);
                break;
            }
        }

        //step 4 reverse the array 
        reverse(nums.begin() + pivot+1 , nums.end());

    }
};