#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n){

    if(n <= 2) return true;
    if(n % 2 == 0) return false;

    for(int i = 3;i <= n/ i;i += 2)
        if(n % i == 0) return false;

    return true;
}

int main()
{
    char str[33];
    while(scanf("%s",str) == 1)
    {
        int n = 0;
        for(int i = 0;i < strlen(str);++i)
            n += str[i] >= 'a' && str[i] <= 'z'? str[i] - 'a' + 1 : str[i] - 'A' + 27;
        puts(is_prime(n)? "It is a prime word." : "It is not a prime word.");
    }

    return 0;
}
