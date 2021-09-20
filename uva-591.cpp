#include<bits/stdc++.h>
using namespace std;

int main()
{


    int n,test=1;
    while(true)
    {
        cin>>n;
        if(n==0) break;
        int ar[n+1];
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        int d = sum/n,ans=0;
        for(int i=0; i<n;i++)
        {
            if(ar[i]>d)
            {
                ans += ar[i]-d;
            }
        }
        //Set #1
        //The minimum number of moves is 5.
        printf("Set #%d\n",test++);
        printf("The minimum number of moves is %d.\n\n",ans);

    }
}
