#include<stdio.h>
#define pf printf
#define sf scanf
void print(int n)
{
    int i,j,k,l;

    for(i=1; i<=n; i++)
        {
        for(j=1; j<=i; j++)
        pf("%d",i);
        puts("");
        }

    for(k=n-1; k>=1; k--)
        {
            for(l=k; l>=1; l--)
            pf("%d",k);
            puts("");

        }

}

int main()
{
    int x,n,m,testcase,z;

    sf("%d",&testcase);

    for(z=1; z<=testcase; z++)
    {
        if(z>1)
        puts("");
        sf("%d",&n);

        sf("%d",&m);

        for(x=1; x<=m; x++)
        {
        if (x>1) puts("");
        print(n);
        }
    }


    return 0;
}
