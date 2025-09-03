#include<stdio.h>

int main(){
    int N,factorielle=1;
    printf("donner le nombre N");
    scanf("%d",&N );
    if(N=0){
        printf("factorielle(0) est 1");
    }
    else{


    for(int i=1; i<=N ;i++){
        factorielle*=i;
        
    }
    printf("factt est:%d", factorielle);
}
    return 0;
        
    }
