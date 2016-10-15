/*
n!!…! = n(n−k)(n−2k)…(n mod k), if k doesn’t divide n
10 mod 3 = 1;
10!!! = 10 (10-3) (10-2*3) (10-3*3)
      = 10·7·4·1

n!!…! = n(n−k)(n−2k)…k, if k divides n
8 mod 2 =0;
8!!= 8 *(8-2)*(8-4)*(8-6)
*/
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
    int n,ex=0,i=0;
    /* 1 ≤ n ≤ 10
        number of exclamatory is ex
        i for tracking down string
    */
    int multiply=1,j=0;//j = 0,1,2,3... to get ease
    string k; //for inputing exclamatory

    cin>>n;
    cin>>k;
    //count how many exclamatory in input and save the number to ex
    while(k[i]!='\0')
    {
        if(k[i]=='!')
        {
            ex++;
        }
        i++;
    }

    int temp=0;
    if(n%ex!=0)
    {
        while(temp!=(n%ex))
        {
            multiply*=(n-ex*j);
            temp=n-ex*j;
            j++;
        }
    }
    else
    {
        while(temp!=ex)
        {
            multiply*=(n-ex*j);
            temp=n-ex*j;
            j++;
        }
    }
    cout<<multiply;
    return 0;
}
