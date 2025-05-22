#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n % 3 == 0) printf("%d\n",n);
    else if(n % 3 == 1) printf("%d\n", n -1);
    else printf("%d\n", n + 1);
    return 0;
}