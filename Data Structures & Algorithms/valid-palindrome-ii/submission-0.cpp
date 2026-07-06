class Solution {
public:
    bool ispalindrome(string x){
        string a=x;
        reverse(a.begin(),a.end());
        return a==x;
    }
    bool validPalindrome(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            string x=s;
            x.erase(x.begin()+i);
            bool f=ispalindrome(x);
            if(f){
                return true;
            }
        }
        return false;
    }
};