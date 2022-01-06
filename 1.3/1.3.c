#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
double a = 0; 
double b = 0; 
int n; 
scanf("%lf", &a); 
scanf("%lf", &b); 
scanf("%d", &n); 
double Y[n]; 
double R = 1.00; 
for (int i = 0; i < n; i++){ 
    Y[i] = ((double)rand()/RAND_MAX)*35-20; 
    printf("\n Y[n]%d: %.3lf",i+1,Y[i]); 
    if (Y[i] >= -10 && Y[i] <= 10 ){ 
        Y[i] = a*Y[i]*Y[i]*Y[i]; 
    } else{ 
        Y[i] = 1 + Y[i]; 
    } 
    printf("\n Z[n]%d: %.3lf",i+1, Y[i]); 
    if ((i+2) % 2 == 0){ 
        Y[i] = 6*b*Y[i] - (i+1)*(i+1)*a; 
    } else { 
        Y[i] = -1*(6*b*Y[i] - (i+1)*(i+1)*a); 
    } 
    printf("\n G[n]%d: %.3lf",i+1, Y[i]); 
    R *= Y[i]; 
    } 
    printf("\nR=%.3fl", R); 
    return 0; 
} 


