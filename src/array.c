#include <stdio.h>

int n;
int k;
int A[100000];

int main()
{
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);
  }
  // ub->A[ub]>=kを満たす最小の数、存在しないときはn
  // lb->A[lb]<kを満たす最大の数
  ub = n;
  lb = -1;
  while (ub > lb + 1)
  {
    int mid = (ub + lb) / 2;
    if (A[mid] >= k)
    {
      ub = mid;
    }
    else
    {
      lb = mid;
    }
  }
  printf("%d\n", ub);
  return 0;
}
