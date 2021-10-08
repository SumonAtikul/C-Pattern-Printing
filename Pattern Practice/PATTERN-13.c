#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int b=1;
        printf("1");
        for(int j=2; j<=i; j++){
            printf(" %d", b*=2);
        }
        for(int j=i; j>=2; j--){
            printf(" %d", b/=2);
        }
        printf("\n");
    }
    return 0;
}

