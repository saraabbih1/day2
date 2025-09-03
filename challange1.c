#include<stdio.h>
int main(){
    int N,i,m;
    printf("donner le nombre N");
    scanf("%d",&N);

    for(i=1; i<=10; i++){
        printf("\n");
        m=N*i;
        printf("table de multiplication  : %d*%d=%d",N,i,m);
    }
    return 0;
}