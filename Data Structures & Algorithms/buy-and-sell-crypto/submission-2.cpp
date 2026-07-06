class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        int mn=prices[0];
        for(int i=0;i<n;i++){
            mn=min(mn,prices[i]);
            ans=max(ans,abs(prices[i]-mn));
        }
        return ans;

    }
};
