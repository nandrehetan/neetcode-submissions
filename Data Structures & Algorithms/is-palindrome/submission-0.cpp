class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(auto it:s){
            if(isalnum(it)){
                a+=tolower(it);
            }
        }
        string b=a;
        cout<<a<<endl;
        reverse(b.begin(),b.end());
        cout<<b<<endl;
        return a==b;
    }
};
