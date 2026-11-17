class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                cnt++;
            }
        }
        vector<int>ans(n);
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                ans[j]=nums[i];
                j++;
            }
        }
        nums.clear();
        nums=ans;

        return n-cnt;
    }
};