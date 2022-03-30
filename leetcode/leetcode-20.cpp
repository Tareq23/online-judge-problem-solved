#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
        stack<char> st;
        int len = s.size();
        int i=0;
        while(i!=len)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else if(st.size()>0){
                char ch = st.top();
                if((s[i] == ')' && ch == '(') || (s[i] == '}' && ch == '{') || (s[i] == ']' && ch == '[')){
                      st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
            i++;
        }
        if(st.size() == 0)
        {
            return true;
        }
        return false;
}

int main(){
    string s;

    cin>>s;
    cout<<isValid(s)<<endl;
}
