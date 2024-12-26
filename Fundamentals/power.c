#include <stdio.h>
#include <stdlib.h>

int power(int base,int power);

void main(){
    printf("%d \n",power(2,2));
}

int power(int base,int power){
    int p = 1;
    for(int i = 0 ; i< power; i++){
        p = p * base;
    }
    return p;
}