#include<bits/stdc++.h>

int main()
{
    int a, b, i, temp, count;
    while(1){
        scanf("%d %d", &a, &b);
        count = 0;
        if(a==0 && b==0)    break;

        for(i = a; i <= b; i++){
            temp = sqrt(i);
            if((temp*temp)==i)
                count++;
        }
        printf("%d\n", count);
    }

    return 0;
}
