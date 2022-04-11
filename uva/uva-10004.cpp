#include<bits/stdc++.h>
using namespace std;

int main()
{
    int node;
    while(cin>>node){
        if(node==0)break;

        vector<int>adj[node+5];
        int edge;
        cin>>edge;
        int x,y,src;
        for(int i=1; i<=edge; i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
            src = x;
        }

        queue<int>q;
        q.push(src);
        int check[node+5];
        memset(check,0,sizeof(check));
        int color[node+5];
        memset(color,0,sizeof(color));
        bool flag=true;

        color[src] = 1;
        while(!q.empty() && flag)
        {
            int u = q.front();
            q.pop();
            check[u] = 1;
            for(int i=0; i<adj[u].size(); i++)
            {
                int v = adj[u][i];
                if(!check[v])
                {
                    if(color[v] != color[u]){
                        q.push(v);
                        color[v] = color[u]==1 ? 2 : 1;
                    }
                    else{
                        flag = false;
                        break;
                    }
                }
            }
        }
        if(flag){
            cout<<"BICOLORABLE."<<endl;
        }
        else{
            cout<<"NOT BICOLORABLE."<<endl;
        }
    }
}
