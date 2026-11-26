#include <stdio.h>

int main(void)
{
   int n;
   scanf("%d", &n);
   int a[20];
   
   for(int i=0; i <n; i++)
   {
        scanf("%d", &a[i]);
   }

   for(int i=0; i< n/2; i++)
   {
     int temp= a[i];
     a[i]= a[n-1-i];
     a[n-1-i]= temp;
     
   }

   for(int i=0; i< n ; i++)
   {
    printf(" %.1f", a[i]);
   }

/*  nov 22, 2026 10:12am | I try again  to reversed an array, but sadly, I used ai to correct my code and it  run.
 */
int array[5]= { 1,2,3,4,5};
int tem=0;
for(int i=0; i<5/2;i++)
{  tem=array[i];
    array[i]= array[5-1-i];
    array[5-1-i]= tem;
}
for( int i=0; i<5;i++)
{
    printf(" %d", array[i]);
}
/*
other ways to do reversed array
*/

 int b=15;
 int arri[15]= { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
 int temp =0;


 for(int a=0, b =14; a<=b; a++,b--)
 {
    temp = arri[a];
    arri[a]=arri[b];
    arri[b]= temp;
 }
for(int i =0; i<=14; i++ )
{
    printf(" %d", arri[i]);
}


   

   return 0;
}
