#include <stdio.h>

/*
int is_prime(int n)
{
    if( n <=1)
    {
        return 0;
    }
    for( int i=2; i * i <=n; i++)
    {
        if( n % i ==0)
        {
            return 0;
        }
    }
    return 1;
}

int main ()
{
    int x;
    scanf("%d", &x);

    int a[100];
    int c=0;
int s=0;

    for(int i=0; i < x; i++)
    {
        scanf("%d", &a[i]);

        if(is_prime(a[i]))
        {  c++;
           s+=a[i];
            printf("%d prime\n", a[i]);
        }
    }

    printf("%d -count\n",c);
    printf("%d -sum\n", s);
    return 0;
}
*/

//finding prime, count, and its sum.
int main()
{
    int n;
    scanf("%d", &n);
    int a[100];
    int c=0;
    int s=0;


    for(int i =0; i <n;i++)
    {
        scanf("%d", &a[i]);
        if(a[i]<=1)
        {
            continue;
        }
      int isPrime=1;

      for(int j =2; j*j <=a[i]; j++)
     {
                if(a[i] % j==0)
                    {
                        isPrime=0;
                    break;
                    }
     }



        if(isPrime==1)
            {
            c++;

            s+=a[i];
            printf("%d -prime\n", a[i]);
            }


}


printf("%d -sum\n %d-count\n", s, c);
return 0;
}
