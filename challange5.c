#include<stdio.h>

int main(){
    int N,i,s;
    printf("donner le nombre n:");
    scanf("%d",&N);

    s=0;
    for(i=1;i<=N;i++){
        s+=i;
    }
    printf("total is :%d",s);
    return 0;


}