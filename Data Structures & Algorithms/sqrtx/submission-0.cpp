class Solution {
public:
    int mySqrt(int x) {
        int low=1;
        int high=x;

        if(x==1){
            return 1;
        }

        while(low<high){
            int mid=low+(high-low)/2;

            if((mid)>x/mid){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low-1;
    }
};