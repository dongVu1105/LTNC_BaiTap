#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;

void update(int *a,int *b) {
    int a1=*a, b1=*b;
    *a=a1+b1;
    *b=abs(a1-b1);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

