#include <stdio.h>

int main()
{
    int i=1,n;
    printf("Enter an integer");
    scanf("%d", &n);
    while(i<=20)
    {
        printf("%dx%d=%d\n",n,i,n*i);
        ++i;
    }
    return 0;
}
