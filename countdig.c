#include <stdio.h>
int countdig(int a) 
{
    if (a == 0)
        return 0;
    return 1 + countdig(a / 10);
}
int main()
{
    int num = 90;
    printf("Number of digits in %d is %d\n", num, countdig(num));
    return 0;
}