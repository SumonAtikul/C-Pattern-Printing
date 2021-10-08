#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int b=1;
        for(int j=1; j<=i; j++){
            b*=2;
        }

    for(int j=b; j>=1; j--){
        printf("%d ", b/=2);
        if(b==1){
            break;
        }
    }
    printf("\n");
}
return 0;
}

