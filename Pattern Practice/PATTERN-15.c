#include<stdio.h>
int main()
{
    int n, b;
    scanf("%d", &n);
    for(int i=1; i<=(2*n); i+=2){
        for(int j=1; j<=i; j++){
            b+=1;
            printf("%d ", b);
        }
        printf("\n");
    }
    return 0;
}


