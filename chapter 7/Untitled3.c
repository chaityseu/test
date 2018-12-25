#include<stdio.h>
int max (int a , int b)
{
    if (a>=0)
        return a;
    return b;
}

    int max4(int a , int b, int c, int d)
{
    return max(max(a,b),max(c,d));
}
  int main(void)
  {
      int a, b, c, d;
      printf("Enter Four Numbers\n");
      scanf("%d%d%d%d",&a,&b,&c,&d);
      printf("Maximum of the Four Values is %d\n",max4(a,b,c,d));
  }
