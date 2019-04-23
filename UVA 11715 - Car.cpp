#include<bits/stdc++.h>

int main()
{
    float u, v, t, a, s;
    int test = 1, choice;
    while(1){
    	scanf("%d", &choice);
    	if(choice==0)	break;
    	else if(choice==1){
    		scanf("%f %f %f", &u, &v, &t);
    		a = (v-u)/t;
    		s = (u*t) + (0.5*a*t*t);
    		printf("Case %d: %0.3f %0.3f\n", test, s, a);
    		test++;
    	}
    	else if(choice==2){
    		scanf("%f %f %f", &u, &v, &a);
    		t = (v-u)/a;
    		s = (u*t) + (0.5*a*t*t);
    		printf("Case %d: %0.3f %0.3f\n", test, s, t);
    		test++;
    	}
    	else if(choice==3){
    		scanf("%f %f %f", &u, &a, &s);
    		v = sqrt((u*u)+(2*a*s));
    		t = (v-u)/a;
    		printf("Case %d: %0.3f %0.3f\n", test, v, t);
    		test++;
    	}
    	else{
    		scanf("%f %f %f", &v, &a, &s);
    		u = sqrt((v*v)-(2*a*s));
    		t = (v-u)/a;
    		printf("Case %d: %0.3f %0.3f\n", test, u, t);
    		test++;
    	}
    }

	return 0;
}
