#include<stdio.h>

int main(void)
{
    int n=0, k=0, pass=0;

    scanf("%d%d", &n, &k);

    int cnt[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &cnt[i]);
    }

    for(int j = 0; j < n; j++){
        if(cnt[j] >= k){pass++;}
    }

    printf("%d\n", pass);
    return 0;
}