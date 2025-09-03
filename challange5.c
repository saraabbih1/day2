#include<stdio.h>
int main(){
    int nombre,puissance,pow=1;
    printf("donner le nombre :");
    scanf("%d",&nombre);

    printf("donner la puissance de nombre:");
    scanf("%d",&puissance);
    if(puissance==0){
        pow=1;
    }
     

    else{
        for(int i=0;i<puissance;i++){
    pow *= nombre;
    }
    }
    printf("pow est : %d",pow);
    return 0;

}