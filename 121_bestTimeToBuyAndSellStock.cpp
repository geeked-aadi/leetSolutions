class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxProfit=0;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            minPrice=min(prices[i],minPrice);
            profit=prices[i]-minPrice;
            maxProfit=max(profit,maxProfit);
        }
        if (maxProfit>0){
            return maxProfit;
        }else{
            return 0;
        }
    }
};