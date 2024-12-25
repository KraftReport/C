#include <stdio.h>
#include <stdlib.h>

void removeAllDataInCharArray(char words[], int length);

void main(){

    char word;
    char words[100];
    int index = 0;

    while((word = getchar()) != EOF){ 
        if(word == '\n'){
        printf("printed ----> %s \n",words); 
        removeAllDataInCharArray(words,100);
        index = 0;
        } 
        if(word != '\n'){
        words[index++] = word;
        }
    }
}

void removeAllDataInCharArray(char words[],int length){
    for(int i = 0 ; i<length ; i++){
        words[i] = '\0';
    }
}