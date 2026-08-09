class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int left = 0;
        set<int> s;

        for(int right = 0; right < nums.size(); right++) {

            // If current number already exists in window
            if(s.find(nums[right]) != s.end()) {
                return true;
            }

            // Add current number
            s.insert(nums[right]);

            // Keep window size <= k
            if(right - left >= k) {
                s.erase(nums[left]);
                left++;
            }
        }

        return false;
    }
};