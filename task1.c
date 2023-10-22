#include <stdio.h>
#include <math.h>
int main() {
float x=1;
float y=2;
float hx=1.3;
float hy=1.5;
float u;
for (x; x<=3; x+=hx) {
 float y=2;
 for (y; y<=4; y+=hy) {
  if (x/(y*y)<1) {
   u = fmax((expf(1) * sinf(x*x) - sqrtf(y)), (1/tanf(cbrtf(x*y*y))));
  } else {
   u = cosf(x*y*y);
  }
  printf("x=%f, y=%f, u=%f\n", x,y,u);
 }
}
return 0;
}
