#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int mx = 100005;
    while(cin>>str)
    {
        int len = str.size(),idx=0;
        bool flag=false,checker=false;
        string ans="",s[mx];
        for(int i=0;i<len;i++)
        {
            if(str[i]==']')
            {
                flag=false;
                checker=true;
                continue;
            }
            if(str[i]=='[')
            {
                flag=true;
                checker=true;
            }
            else if(flag)
            {
                if(checker){
                    checker=false;
                    idx++;
                    s[idx]="";
                }
                s[idx]+=str[i];
            }
            else{
                flag=false;
                ans+=str[i];
            }
        }
        for(int i=idx;i>0;i--)
        {
            cout<<s[i];
        }
        cout<<ans<<endl;
    }
}
