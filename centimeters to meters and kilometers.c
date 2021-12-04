#include <stdio.h>

int main()
{
    float cm,m,km;
    
    printf("Enter length in cm");
    scanf("%f", &cm);
    
    m=cm/100.0;
    km=cm/100000.0;

    printf(" %.2f\n", m);
    printf(" %.2f\n", km);

    return 0;
}
