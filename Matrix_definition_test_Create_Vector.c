#include<stdio.h>
#include<math.h>
#include<time.h>
#include<assert.h>

int
main(){

const double A[3][3]={ {1.,0.,0.},
    {0.,1.,0.},
    {0.,0.,1.}  };
 
  struct vector *x = vector_create_and_set(3, (double[3]) { 1., 2., 3. });
  struct vector *y = vector_create(3);
  struct vector *y_ref = vector_create_and_set(3, (double[3]) { 1., 4., 9. });


for(int i=0;i<3;i++){
for(int j=0;j<3;j++){

y[i]=y[i]+A[i][j]*x[j];


}
}


printf("Hi!");

printf("y vector is: %g %g %g \n",y[0],y[1],y[2] );



return 0;
}
