#include<stdio.h>
int max (int a, int b)
{
    if (a>=b)
        return a;
    return b;
}
    int main(void)
{
    int a,b;
    printf("Enter Two Numbers\n");
    scanf("%d%d",&a,&b);
    printf("Maximum of the Values is %d\n",max(a,b));
}
