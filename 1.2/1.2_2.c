#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int ct = 0;
    double result = 1.00;
    double i, sum;
    
    scanf ("%d", &n);
    for (i = 1; i <= n; i++){
        sum += sin (i) + 1;
        result *= i*(i+1)/sum;
        ct += 10;
    }
    printf("%.7lf\n", result);
    printf("ct =: %d", ct);
    return 0;
}
