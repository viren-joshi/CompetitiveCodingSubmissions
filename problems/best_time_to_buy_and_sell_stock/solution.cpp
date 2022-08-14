class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxi=0;
        int prevDiff=0;
        for(int i=0;i<prices.size();i++){
            mini = min(mini,prices[i]);
            prevDiff=prices[i]-mini;
            maxi=max(maxi,prevDiff);
            
        }
        return maxi;
    }
};