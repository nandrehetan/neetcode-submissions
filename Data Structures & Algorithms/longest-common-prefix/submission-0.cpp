class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";

        int n=strs.size();
        int m=strs[0].size();

        for(int i=0;i<m;i++){
            char ch;
            set<char>st;
            for(int j=0;j<n;j++){
                ch=strs[j][i];
                cout<<ch<<" ";
                st.insert(ch);
            }
            if(st.size()==1){
                cout<<"here"<<endl;
                ans+=ch;
                st.clear();
            }else{
                return ans;
            }
        }

        return ans;
        
    }
};