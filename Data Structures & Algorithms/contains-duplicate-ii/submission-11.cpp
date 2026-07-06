class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0,j=1;
        int n=nums.size();
        while(i<n){
            while(abs(i-j) <= k && j<n){
                if(nums[i]==nums[j]){
                    return true;
                }
                j++;
            }
            i++;
            j=i+1;
        }
        return false;
    }
};