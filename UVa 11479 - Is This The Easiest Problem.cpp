#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int test, a, b, c;
    scanf("%lld", &test);
    for(int i=1; i<=test; i++){
        scanf("%lld %lld %lld", &a, &b, &c);
        if(a==0 || b==0 || c==0)
            printf("Case %d: Invalid\n", i);
        else if(a<0 || b<0 || c<0)
            printf("Case %d: Invalid\n", i);
        else if(a==b && b==c)
            printf("Case %d: Equilateral\n", i);
        else if(a+b<=c || b+c<=a || c+a<=b)
            printf("Case %d: Invalid\n", i);
        else if(a!=b && b!=c && a!=c)
            printf("Case %d: Scalene\n", i);
        else if((a==b && a!=c) || (a==c && a!=b) || (b==c && c!=a) )
            printf("Case %d: Isosceles\n", i);

    }
    return 0;
}
