#include<bits/stdc++.h>
using namespace std;

unsigned long reverseInt(unsigned long n)
{

    int digitCount = floor(log10(n));
    unsigned long mul=1;
    for(int i=1;i<=digitCount;i++)mul*=10;
    unsigned long ans = 0,divider=10;
    while(n>=1)
    {
        ans += (n%10) * mul;
        n/=10;
        mul/=10;
    }
    return ans;
}

int main()
{
    unsigned long n;
    cin>>n;


    int i=1;
    while(i++ <= 1000)
    {
        unsigned long reverseValue = reverseInt(n);
        if(n == reverseValue)
        {
            cout<<reverseValue<<" result is palindrome"<<endl;
            break;
        }
        n+=reverseValue;

    }
    cout<<endl<<"Again Input "<<endl;
    main();
}
