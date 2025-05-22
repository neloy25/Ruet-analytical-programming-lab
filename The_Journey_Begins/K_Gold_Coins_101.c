#include<stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    if(c > d) printf("%d\n",a);
    else printf("%d\n",b);
    return 0;
}