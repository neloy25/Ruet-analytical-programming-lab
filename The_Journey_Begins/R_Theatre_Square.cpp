#include <stdio.h>
#include <math.h>

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    long long w = (n + a - 1) / a;
    long long h = (m + a - 1) / a;

    printf("%lld\n", w * h);
    return 0;
}