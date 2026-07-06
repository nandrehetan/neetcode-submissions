class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int prev=prices[0];
        int ans=0;
        for(int i=0;i<n;i++){
            if(prev>prices[i]){
                prev=prices[i];
            }
            ans=max(ans,prices[i]-prev);
        }
        return ans;
    }
};
