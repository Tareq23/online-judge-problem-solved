#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    string str;
    while(cin>>k)
    {
        if(k==0) break;
        cin>>str;
        int len = str.size();
        int d = len/k;
        int idx1 = 0,idx2 = d;
        //&& i<(idx1+idx2)/2
        for(int i=0,j=0; i<len ; )
        {
            if(i<(idx1+idx2)/2)
            {
                char ch = str[i];
                str[i] = str[idx2-1-j];
                str[idx2-1-j] = ch;
                i++;
                j++;
            }
            else{
                idx1+=d;
                idx2+=d;
                i=idx1;
                j=0;
            }
        }
        cout<<str<<endl;
    }
}
