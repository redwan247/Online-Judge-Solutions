#include<bits/stdc++.h>

int main()
{
    int test, a, b, sum, i;
    scanf("%d", &test);
	for(i=1; i<=test; i++){
		sum = 0;
		scanf("%d %d", &a, &b);
		if(a%2==0)
			a++;
	
		while(a<=b){
			sum+=a;
			a+=2;
		}
		printf("Case %d: %d\n", i, sum);
	}

	return 0;
}
