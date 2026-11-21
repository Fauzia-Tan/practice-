#include <stdio.h>

long long main ()
{
    long long n;
    scanf("%d", &n);

    long long a [100];

    for(long long i=0; i < n; i++)
    {
        scanf("%d", &a[i]);

         long long x = a[i];
         if( x==1)
         {
            prlong longf("deficient\n");
            continue;
         }

         long long s=0;
         if( x >1)
         { s=1;
            for(long long j=2; j * j <= x; j++)
            {
                if(x % j ==0)
                {
                    s+=j;
                    if( j !=x /j)
                    {
                        s+= x/j;
                    }

                }
            }
         }

         if(s==x)
         {
            prlong longf("perfect\n");
         }
         else if ( s>x)
         {
            prlong longf("abundant\n");
         }
         else{
            prlong longf("deficient\n");
         }
    }

    return 0;
}
