#include<bits/stdc++.h>
#define ARRAY_SIZE 100005
using namespace std;
int ar[ARRAY_SIZE];
int dp[ARRAY_SIZE];
int fun(int idx,int n,int k){

    if(idx>=n) return 0;
    int mn = 1<<30;
    if(dp[idx] != -1) return dp[idx];
    for(int i=1; i<=k && (i+idx) <= n; i++)
    {
        mn=min(abs(ar[idx]-ar[idx+i])+fun(idx+i,n,k),mn);
    }
    return dp[idx] = mn;
}

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>ar[i];
    }
    for(int i=0; i<=n; i++) dp[i] = -1;
    int mn = fun(1,n,k);
    cout<<mn<<endl;
}
