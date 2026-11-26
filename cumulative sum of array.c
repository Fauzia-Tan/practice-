#include <stdio.h>

int main ()
{
  int a[20], n;
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    {
      scanf("%d", a[i])
    }
  int b[20];
  //your code here
  b[0]=a[0];
  for(int i=1; i<n; i++)
    {

      b[i] = a[i-1] + a[i];
    }
  
//print

  for(int i=0; i<n; i++)
    {
      printf("%d", b[i]);
    }
  return 0;
}
