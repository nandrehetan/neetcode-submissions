class Solution {
public:
int solve(int n){
            int cnt=0;
            for(int i=0;i<32;i++){
                if((1&(n>>i))==1){
                    cnt++;
                }
            }
            return cnt;
        }
    vector<int> countBits(int n) {

        

        vector<int>v(n+1);
        for(int i=0;i<=n;i++){
            v[i]=solve(i);
        }
        return v;
        
    }
};
