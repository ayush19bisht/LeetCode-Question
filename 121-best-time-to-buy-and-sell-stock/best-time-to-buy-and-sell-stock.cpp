class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int maxprofit = 0 ;
        for(int i = 0 ; i<prices.size() ; i++){
            int curr = prices[i];
           minprice =  min(curr , minprice);
           int profit = curr - minprice;
           maxprofit = max(profit , maxprofit);
        }
        return maxprofit;
    }
};