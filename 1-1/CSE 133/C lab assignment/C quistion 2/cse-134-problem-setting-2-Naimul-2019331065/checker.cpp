#include<stdio.h>

int main()
{
    int n, m, a, i;
    scanf("%d%d", &n, &m);
    if(n<1 || n>100000 || m<0 || m>100000) {
        printf("Input is invalid\n");
        return 1;
    }
    for(i=0; i<n; i++) {
        scanf("%d", &a);
        if(a<0 || a>100000) {
            printf("Input is invalid\n");
            return 1;        }
    }
    printf("Valid input\n");
    return 0;
}
