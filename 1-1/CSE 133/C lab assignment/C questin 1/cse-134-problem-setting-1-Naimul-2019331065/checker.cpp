#include<stdio.h>
int main()
{
    int t, i, m, j, a, b;
    scanf("%d", &t);
    if(t<1 || t>10){
        printf("Invalid input");
        return 1;
    }
    i = 10000;
    scanf("%d%d%d%d", &m, &j, &a, &b);
    if(m<0 || j<0 || a<0 || b<0 || m>i || j>i || a>i || b>i) {
        printf("Invalid Input");
        return 1;
    }
    printf("Input is valid");
    return 0;

}
