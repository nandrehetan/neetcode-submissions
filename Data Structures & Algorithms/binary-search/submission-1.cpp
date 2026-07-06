class Solution {
public:
    int search(vector<int>& nums, int target) {
        bool f=binary_search(nums.begin(),nums.end(),target);
        if(f){
            return lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        }
        return -1;
    }
};
