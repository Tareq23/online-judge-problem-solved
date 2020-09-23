#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0;
    while(cin>>n)
    {

        int ar[n+5];
        int cnt[105],s_ar[1005],ii=1,q_idx=1,l_idx=0,p_ar[1005];
        bool impossible=false,que=true,stk=true,pque=true;
        for(int i=0;i<1005;i++){
            p_ar[i]=0,s_ar[i]=0;
        }
        for(int i=0;i<105;i++)cnt[i]=0;
        int op,val;
        for(int i=1;i<=n;i++)
        {
            cin>>op;
            if(op==1)
            {
                scanf("%d",&ar[ii]);
                cnt[ar[ii]]++;
                p_ar[ii] = ar[ii];
                s_ar[++l_idx] = ar[ii];
                ii++;
            }
            else{
                scanf("%d",&val);
                if(cnt[val]<=0||impossible){
                    impossible = true;
                    continue;
                }
                if(que)
                {
                    if(ar[q_idx]==val)q_idx++;
                    else{
                        que=false;
                    }
                }
                if(stk)
                {
                    if(s_ar[l_idx]==val&&l_idx>0)
                    {
                        l_idx--;
                    }
                    else{
                       stk = false;
                    }
                }
                if(pque)
                {
                    int mxx=-1,mx_idx=0;
                    for(int k=1;k<ii;k++)
                    {
                        if(p_ar[k]>mxx)
                        {
                            mxx = p_ar[k];
                            mx_idx=k;
                        }
                    }
                    if(mxx!=val)pque=false;
                    else{
                        p_ar[mx_idx]=-2;
                    }
                }
                cnt[val]--;
            }
        }
        if(impossible||(!que&&!stk&&!pque))
        {
            cout<<"impossible";
        }
        else
        {
            if((que&&stk)||(que&&pque)||(pque&&stk))
            {
                cout<<"not sure";
            }
            else if(que)
            {
                cout<<"queue";
            }
            else if(stk)
            {
                cout<<"stack";
            }
            else if(pque)
            {
                cout<<"priority queue";
            }
        }
        printf("\n");
    }
}
