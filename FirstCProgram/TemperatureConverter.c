#include <stdio.h>
#include <stdlib.h>


int main(){
         
    #define const_lower  0
    #define const_upper 300
    #define const_step 20
 
    int fahr;

    for(fahr = const_lower; fahr <= const_upper; fahr = fahr+ const_step){
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32)); 
    }

    return 0;
}