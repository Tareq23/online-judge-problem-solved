#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int num)
{
    if(num<0) return false;

    long long oldNumber = num;
    int len = log10(num==0?1:num) + 1;
    long long reverseNumber = 0;
    while(num)
    {
        long long n = num % 10;
        long long mul = n;
        for(int i=0; i<len-1; i++)
        {
            mul *= 10;
        }
        len--;
        reverseNumber += mul;
        num/=10;
    }
    if(oldNumber == reverseNumber) return true;
    return false;
}
int main()
{
    int num;
    cin>>num;
    cout<<isPalindrome(num)<<endl;
    main();
}
