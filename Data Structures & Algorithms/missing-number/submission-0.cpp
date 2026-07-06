class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int cur=0;
        for(auto it:nums){
            cur+=it;
        }
        return sum-cur;
        
    }
};
