#include <time.h>
#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>


#define N 1000

static inline double
WTime(void)
{
  struct timeval tv;
  gettimeofday(&tv, NULL);
  return tv.tv_sec + tv.tv_usec / 1e6;
}




int main(){


int	i,j,k;
double	A[N][N][N];
double	t1,t2;

t1=WTime();

for(i=0;i<N;i++)
for(j=0;j<N;j++)
for(k=0;k<N;k++)
{
 {
  {
A[i][j][k]=j*k+i*2+3;

  }
 }
}
t2=WTime();
printf("time:%g\n",t2-t1);


return 0;

}
