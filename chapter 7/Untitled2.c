#include<stdio.h>
long long square(long v)
{
    long long ans = (long long)v*v;
    return ans;
}
  int main(void)
  {
      long n;
      long long ans;
      scanf("%ld",&n);
      ans = square(n);
      printf("the square of%ld is %lld\n",n,ans);
  }
