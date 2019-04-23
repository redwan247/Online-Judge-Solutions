#include<bits/stdc++.h>

int main()
{
    int test;
    long int a, b;
    scanf("%d", &test);
	while(test--){
		scanf("%ld %ld", &a, &b);
		if(a>b)
			printf(">\n");
		else if(a==b)
			printf("=\n");
		else
			printf("<\n");
	}

	return 0;
}
