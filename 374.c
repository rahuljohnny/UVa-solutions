#include<stdio.h>
#include<math.h>
long bm(long b,long p,long m)
{
    if(p==0)
        return 1;
    else if(p%2==0){
            long h=bm(b,p/2,m);
    long g=powl(h,2);
        return g%m;
    }
        else return ((b%m)*bm(b,p-1,m))%m;
}
main()
{
    long a,b,c,d;
    scanf("%lld%lld%lld",&a,&b,&c);
    d=bm(a,b,c);
    printf("%lld",d);
    return 0;
}
