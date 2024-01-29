#include<stdio.h>

int min(int a, int b)
{
    if(a>b) return b;
    else return a;
}

int main()
{
    int m, j, a, b, i, t;
    scanf("%d", &t);
    while(t--) {
        scanf("%d%d%d%d", &m, &j, &a, &b);
        if(m==0 || j==0)
            printf("0\n");
        else if(b==0)
            printf("%d\n", j);
        else if(a==0) printf("1\n");

        else if(b<=a)
            printf("%d\n", min(m, j));
        else {
            i = b + a - (b%a);
            printf("%d\n", min(((m-1)*a)/i+1, j));
        }
    }
    return 0;
}
