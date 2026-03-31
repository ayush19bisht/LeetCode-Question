class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // HASHMAP approach
        //unordered_map<int , int> m;
        // for(int i=0 ; i<nums.size() ; i++){
        //     m[nums[i]]++;  
        // } 
        // for(int i =0 ;i<nums.size() ; i++){
        // if(m[nums[i]] == 1){
        //         return nums[i];
        //     }
        // }
        // return -1;


        //XOR approach
        int result = 0;
        for(int i=0 ; i<nums.size() ; i++){
            result = result ^ nums[i];
        }
        return result;
    }
};