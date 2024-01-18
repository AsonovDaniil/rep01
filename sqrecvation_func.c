#include <stdio.h>
#include <math.h>
void func(int a, int b, int c, int d, double* x1, double* x2){
 *x1=(-1*b + sqrt(d))/(2*a);
 *x2=(-1*b - sqrt(d))/(2*a);
}
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
 else{
  func(a, b, c, d, &x1, &x2);
  if (x1!=x2)
   printf("два корня x1= %.2f, x2= %.2f\n", x1, x2);
  if (x1==x2)
   printf("один корень x= %.2f\n", x1);
 }
return 0;
}
