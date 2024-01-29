#include<stdio.h>

int main()
{

    long long t, i, j, n, m, p;
    scanf("%lld%lld", &n, &m);
    p =0;
    long long v[100001] = {0};
    for(i=0; i<n; i++) {
        scanf("%lld", &j);
        v[j]++;
    }
    for(i=1; i<100001; i++) {
        if(v[i]==0)
            continue;
        j = m^i;
        if(j>100000 || j<0) ;
        else if(j==i) p+=(v[i]*(v[i]-1));
        else if(v[j]>0) p+=(v[i]*v[j]);
    }
    printf("%lld\n", p/2);
    return 0;
}

