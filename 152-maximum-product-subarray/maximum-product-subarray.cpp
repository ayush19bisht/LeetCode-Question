class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int maxend = arr[0];
        int minend = arr[0];
        int ans = arr[0];
        for(int i=1 ; i<arr.size() ; i++){
            int v1 = arr[i];
            int v2 = maxend * arr[i];
            int v3 = minend * arr[i];
            maxend = max(v1 , max(v2 , v3));
            minend = min(v1 , min(v2 , v3));
            ans = max(ans , max(maxend , minend));
        }
        return ans;
    }
};