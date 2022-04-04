#include<bits/stdc++.h>
#define ARRAY_SIZE 100005
#define MX 1<<30
using namespace std;
int ar[ARRAY_SIZE];
int dp[ARRAY_SIZE];

int fun(int idx, int n)
{
    if(idx >= n) return 0;

    if(dp[idx] != -1) return dp[idx];

    dp[idx] = min(abs(ar[idx] - ar[idx+1])+fun(idx+1,n), idx+2 <= n ? abs(ar[idx] - ar[idx+2])+fun(idx+2,n) : MX);
    return dp[idx];
}

int main()
{
    for(int i=0; i<ARRAY_SIZE; i++){
        dp[i]=-1;
    }
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>ar[i];
    }
    cout<<fun(1,n)<<endl;
}
