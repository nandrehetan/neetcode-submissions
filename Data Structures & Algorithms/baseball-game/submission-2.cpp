class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(auto it:operations){
            if(it != "+" && it != "C" && it != "D"){
                st.push(stoi(it));
            }else if(it[0]=='+'){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
            }else if(it[0]=='C'){
                st.pop();
            }else{
                int a=st.top();
                st.push(2*a);
            }
        }
        int ans=0;
        while(!st.empty()){
            int a=st.top();
            // cout<<a<<endl;
            ans+=a;
            st.pop();
        }
        return ans;
    }
};