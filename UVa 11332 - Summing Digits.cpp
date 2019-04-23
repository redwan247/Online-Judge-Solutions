#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;

    while(scanf("%lld", &a)!=EOF){
        if(a==0)
            break;

        while(a>9)
            a = (a%10) + (a/10);

        printf("%lld\n", a);
    }


    return 0;
}