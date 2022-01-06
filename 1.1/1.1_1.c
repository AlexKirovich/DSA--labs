#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    scanf ("%f", &x);
    if(x >= 8){
        if (x < 23){
        y = -5*x*x*x+10;
        printf ("%f", y);
        } else{
            printf ("No output\n");
        }
    } else if (x <= 0){
        if (x >-3){
            y = 2 * x*x*x + 8 * x*x;
            printf ("%f", y);
        } else if (x < -19){
            y = 2 * x*x*x + 8 * x*x;
            printf ("%f", y);            
        } else {
            printf ("No output");
        }
    } else{
        printf("No output\n");
    }
    return 0;
}

