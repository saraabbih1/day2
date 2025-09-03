#include<stdio.h>
int main(){
    int nombre,rest,sup,nv;
    printf("entre un nombre :");
    scanf("%d",&nombre);
    while(nombre=0){
       rest= nombre%10;
       sup=nombre/10;
       nv=rest;
       printf("le nombre renverse est :%d",nv);
       return 0;
    }

}