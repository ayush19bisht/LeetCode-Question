class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //brite approach   it will not work in all test cases of this question
        // int n = nums.size();
        // for(int i=0 ; i<k ; i++){
        //     int temp = nums[n-1];
        //     for(int j=n-1 ; j>0 ; j--){
        //         nums[j] = nums[j-1];
        //     }
        //     nums[0] = temp;
        // }

        int n = nums.size();
        k = k % n;
        reverse(nums.begin() , nums.end());         // 1st reverse
        reverse(nums.begin() , nums.begin()+k);     //2nd reverse
        reverse(nums.begin()+k , nums.end());       //3rd reverse

    }
};