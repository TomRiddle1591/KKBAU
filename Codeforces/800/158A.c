#include <stdio.h>
int main(void)
{
    int n, k;
    scanf("%d%d", &n, &k);


    int cnt[n];
    int kScore=0;
    for(int i=0; i < n; i++){
        scanf("%d", &cnt[i]);
        if(i == k-1){kScore = cnt[i];}
    }
    
    int pass=0;
    for(int j=0; j < n; j++){
        if(cnt[j] >= kScore && cnt[j] > 0){pass++;}
    }
    
    printf("%d\n", pass);
return 0;
}