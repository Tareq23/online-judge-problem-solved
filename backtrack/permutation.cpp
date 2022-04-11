
#include<bits/stdc++.h>
using namespace std;
int check[100005];
int position[100005];
void permutation(int idx,int n)
{
    if(idx >= n){
        //cout<<idx<<" base "<<endl;
        for(int i=0; i<n; i++){
            cout<<position[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0; i<n;i++)
    {
        if(!check[i]){
            position[idx] = i;
            check[i] = 1;
            permutation(idx+1,n);
            check[i] = 0;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)position[i] = i;
    permutation(0,n);
}
