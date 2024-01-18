#include <stdio.h>
int main(){
 int a;
 int b;
 int c;
 int t;
 int dd;
 scanf("%d", &a);
 scanf("%d", &b);
 scanf("%d", &c);
 int t0=c;
 int t1=a+b+c;
 int t2=4*a+2*b+c;
 int d1=t1-t0;
 int d2=t2-t1;
 int d=d2-d1;
 dd=d2;
 t=t2;
 printf("%d\n %d\n %d\n", t0, t1, t2);
 for(int i=0; i<98; i++){
  dd=dd+d;
  t=t+dd;
  printf("%d\n", t);
 }
return 0;
}
