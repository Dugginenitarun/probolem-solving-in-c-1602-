#include <stdio.h>
int main() {
   
	int a,b,c,d,e,ch;
	float f,g,h;
	printf("enter the value of a");
    scanf("%d",&a);
	printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the choice");
    scanf("%d",&ch);
    switch(ch)
{
    case 1:
    c=a+b;
    printf("%d",c);
    break;
    case 2:
    d=a-b;
    printf("%d",d);
    break;
    case 3:
    e=a*b;
    printf("%d",e);
    break;
    case 4:
    f=a/b;
    printf("%d",f);
    break;
    case 5:
    g=a%b;
    printf("%d",g);
    
}
    return 0;
	}
