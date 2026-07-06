class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int arr[32];
        for(int i=0;i<32;i++){
            arr[i]=(1&(n>>i));
        }
        uint32_t ans=0;
        for(int i=31;i>=0;i--){
            if(arr[i]==1){
                ans|=(1<<(31-i));
            }
        }
        return ans;
    }
};
