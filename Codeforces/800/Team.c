#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n], result = 0;

    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr[j]);
            if(arr[j] == 1){count++;}
        }
        if(count >= 2){result++;}
    }

    printf("Confirm: %d\n", result);

return 0;
}