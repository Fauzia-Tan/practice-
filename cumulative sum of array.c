#include <stdio.h>

int main ()
{
  int a[20], n;
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    {
      scanf("%d", &a[i]);// I forgot to put the & sign, ( calling the memory address) and semicolon.
    }
  int b[20];
  //your code here
  b[0]=a[0];
  for(int i=1; i<n; i++)
    {

      b[i] = b[i-1] + a[i]; // b instead of a
    }
  
//print

  for(int i=0; i<n; i++)
    {
      printf("%d", b[i]);
    }
  return 0;
}
