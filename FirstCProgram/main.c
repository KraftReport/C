#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int fahrenheit;
    int celsius;
    int lower;
    int upper;
    int step;

    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;

    while(fahrenheit <= upper){
        celsius = 5 * (fahrenheit-32) / 9;
        printf("%d\t%d\n",fahrenheit,celsius);
        fahrenheit = fahrenheit + step;
    }

    system("pause"); // For Windows

    #define const_lower = 0;
    #define const_upper = 300;
    #define const_step = 20;

    int fahr;

    for(fahr = const_lower; fahr <= const_upper; fahr = fahr+ step){
        printf("3d% 6f.1%\n",fahr,(5.0/9.0)*(fahr-32))
    }

}
