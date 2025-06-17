#include<stdio.h>

int main()
{
    int n;
 
    scanf("%d",&n);
 
    if(n == 0)
        printf("Neither positive nor negative");
    else if(n < 0)
        printf("Negative\n");
    else
        printf("Positive\n");
     
    return 0;
}
