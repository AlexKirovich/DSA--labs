#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int n;
int ct = 0;
double result = 1.00;
double i, j, sum;
scanf ("%d", &n);
for (i = 1; i <= n; i++){
    double sum = 0.00;
    for (j = 1; j <= i; j++){
        sum += sin (j) + 1;
        ct += 6;
    }
    result *= i*(i+1)/sum;
    ct += 8;
    }
printf("%.7lf\n", result);
printf("ct =: %d", ct);
return 0;
}

