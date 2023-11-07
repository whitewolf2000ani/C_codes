#include <stdio.h>

int main()
{
    int p, n;
    float r, si;
    scanf("%d %d %f", &p, &n, &r);
    si = (p * r * n) / 100;
    printf("%f", si);
}
