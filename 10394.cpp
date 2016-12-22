#include<bits/stdc++.h>
#define cover(a,d) memset(a,d,sizeof(a))
using namespace std;

bool prime[20000010];
int twinprime[20000010];
void sieve()
{
    prime[1]=false;
        int n=sqrt(20000010);
        for(int i=3;i<=n;i++)
        {
            if(prime[i]!=false)
            {
                for(int j=2*i;j<=20000010;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
}
void twin_prime()
{
    int j=1;
    for(int i = 3;i<=20000000;i++){
        if(prime[i] && prime[i+2])
        {
            twinprime[j++] = i;
        }
    }
}
int main()
{
    cover(prime,true);
    sieve();
    twin_prime();
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("(%d, %d)\n",twinprime[n],twinprime[n]+2);
    }
    return 0;
}
