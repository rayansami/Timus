// find the sum of all integer numbers lying between 1 and N inclusive
#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    if(n>0)
    {
        for(int i=1; i<=n;i++)
        {
            sum+=i;
        }
    }
    else
    {
        for(int i=1; i>=n;i--)
        {
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}
