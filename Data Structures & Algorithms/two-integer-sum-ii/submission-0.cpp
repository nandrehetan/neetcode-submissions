class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int n=numbers.size();
        for(int i=0;i<n;i++){
            if(mp.find(target-numbers[i])!=mp.end()){
                ans.push_back(1+mp[target-numbers[i]]);
                ans.push_back(i+1);
                
            }else{
                mp[numbers[i]]=i;
            }
        }
        return ans;
    }
};
