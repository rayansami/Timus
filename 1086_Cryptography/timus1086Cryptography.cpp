#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctime>
using namespace std;
int primegen(int);
#define Max 163841
int a[Max];
int cop[15001];
void init(){
    //Setting 1 to entire array
    for(int i=0;i<=Max;i++){
        a[i]=true;
    }
    //setting false in two index we don't need
    a[0]=a[1]=0;

    //Apply Sieve of Eratosthenes Algorithm by Wiki to get faster Execution time
    for(int i=2;i<=sqrt(Max);i++){
        if(a[i]==1){
            for(int j=i*i;j<=Max;j+=i){
                a[j]=0;
            }
        }
    }
    //Coping the prime values in ordered index like cop[1]=2 ,cop[2]=3....cop[15000]=163841
    int k=1;
    for(int i=2;i<=Max;i++){
       if(a[i]==1){
            cop[k]=i;
            k++;
       }
    }

}
int main()
{
    int k,n,nthPrime;
    init();
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d",&n);
        nthPrime=cop[n];
        printf("%d\n",nthPrime);
    }
     return 0;
}
//163841
//sieve of erathostinis
