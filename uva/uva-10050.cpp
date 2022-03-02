#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    int dayArray[3650+5],partyArray[101];
    while(test--)
    {
        int day,party;
        cin>>day>>party;
        for(int i=0 ;i<=day+5; i++) dayArray[i]=0;
        for(int i=0; i<party; i++)
        {
            cin>>partyArray[i];
        }

        for(int i=6; i<=day; i+=5)
        {
            dayArray[i++] = -2;
            dayArray[i++] = -2;
        }



        for(int i=0; i<party; i++)
        {
            for(int j=partyArray[i]; j<=day; j+=partyArray[i])
            {
                if(dayArray[j]!=-2)
                    dayArray[j] = -1;
            }
        }
        int ans=0;
        for(int i=1; i<=day; i++)
        {
            if(dayArray[i] == -1) ans++;
        }
        cout<<ans<<endl;

    }
}
