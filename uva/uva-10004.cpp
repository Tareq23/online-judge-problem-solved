#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;//number of nodes
    while(cin>>n){
            if(n==0)break;
        int edge;
        cin>>edge;
        vector<int>adj[n+1];
        int x,y;
        for(int i=1;i<=edge; i++){
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        int color[n+5];
        for(int i=0; i<=n; i++)color[i]=1;
        bool ans = true;
        queue<int>q;
        q.push(x);
        while(!q.empty())
        {
            int source = q.front();
            q.pop();
            for(int i=0; i<adj[source].size(); i++)
            {
                if(color[adj[source][i]]==1)
                {
                    color[adj[source][i]] = 1-color[source];
                    q.push(adj[source][i]);
                }
                else if(color[adj[source][i]] == color[source])
                {
                    ans = false;
                    break;
                }
            }
            if(!ans) break;
        }
        if(ans){
            cout<<"BICOLORABLE."<<endl;
        }
        else{
            cout<<"NOT BICOLORABLE."<<endl;
        }
    }
}

