#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF) {
        int q;
        int c = 0;
        int temp;
        vector <int> v;
        while(b != 0) {
            v.push_back(a / b);
            temp = a;
            a = b;
            b = temp % b;
        }
        printf("[%d;", v[0]);
        for(int i = 1; i < v.size() - 1; i++) {

            cout << v[i] << ",";
        }
        printf("%d]\n", v[v.size() - 1]);
    }

    return 0;
}

