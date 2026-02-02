class Solution {
public:
//sorted array
    vector<int> twoSum(vector<int>& arr, int target) {
        int lp = 0;             //left pointer
        int rp = arr.size()-1;  //right pointer
        while(lp<rp){
            int sum = arr[rp] + arr[lp];
            if(sum == target){
                return {lp+1 , rp+1};
            }
            else if(sum<target){
                lp++;
            }
            else if(sum>target){
                rp--;
            }
        }
        return {};
    }
};