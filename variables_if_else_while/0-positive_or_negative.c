#include <stdio.h>

int main() {
    int a;
    printf("enter the number:\n");
    scanf("%d",&a);
    printf("a=%d \n",a);
    if(a>0)
        {printf("the number is positive");}
    else
        {printf("the number is zero");}
    else if(a<0)
        {printf("the number is negative");}
    return 0;


}
