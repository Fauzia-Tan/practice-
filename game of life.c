#include <stdio.h>
int main ()
{
   int r, c, a[3][3], b[3][3];
  scanf("%d %d", &r, &c);

  for(int i=0; i<r; i++)
    { 
      for (int j=0; j<c; j++)
        {
          int count =0;
          for(int di=-1; di<=1; di++)
            {
              for(int dj=-1; dj<=1; dj++)
                {
                  if(di==0 && dj==0)
                    {
                      continue;//skip
                    }
                  int ni=i+di;
                  int nj=j+dj;

                  if(ni>=0 && ni<r && nj>=0 && nj <c)
                  {
                    count+= a[i][j];
                  }
                  
                }
            }
          // apply rules

          if(a[i][j] ==1)
          {
            if( count ==2 || count ==3)
            {
              b[i][j] =1;
          }
            else
            {
              b[i][j]=0;
            }
        }

          else
          {
            if(count ==3)
            {
              b[i][j]=1;
            }
            
          }
          

    }
//printing the new array b

      for(int i=0; i<r; i++)
        {
          for(int j=0; j<c; j++)

            {
              if(j<0)
              { printf(" ");
              }
              printf("%d", b[i][j]);
            }
          
        }
      return 0;

  
}
