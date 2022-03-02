#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int mx=1000005;
    while(cin>>n>>m)
    {
        vector<vector<int> >vec(mx);
        int x;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&x);
            vec[x].push_back(i);
            //printf("%d\n",vec[x])
        }
        int k,v;
        for(int i=1;i<=m;i++)
        {
            scanf("%d %d\n",&k,&v);
            printf("k : %d\tv : %d\n",k,v);
            int vec_len = vec[v].size();
            if(vec_len>=k)
            {
                printf("%d\n",vec[v][k-1]);
            }
            else{
                printf("0\n");
            }
        }
    }
}
