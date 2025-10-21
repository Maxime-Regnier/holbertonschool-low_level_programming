#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d \n", n);

if (n > 0)
{
printf("%d id positive\n" n);
}
else if (n < 0)
{
printf("%d id negative\n" n);
}
else
{
printf("%d is zero\n" n);
}
return (0);
}
