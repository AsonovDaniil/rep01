#include <stdio.h>
#include <math.h>
int main(){
 int a;
 int b;
 int c;
 int d;
 double x1;
 double x2;
 scanf("%d", &a);
 scanf("%d", &b);
 scanf("%d", &c);
 d=b*b-4*a*c;
 if (d<0)
  printf("нет решений");
 x1=(-1*b + sqrt(d))/(2*a);
 x2=(-1*b - sqrt(d))/(2*a);
 printf("x1= %.2f, x2= %.2f\n", x1, x2);
return 0;
}
