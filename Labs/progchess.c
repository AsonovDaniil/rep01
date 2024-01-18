#include <stdio.h>
#include <string.h>
int n1;
int n2;
char n3[10]="#_";
char n4[10]="_#";
char a[20]="";
char b[20]="";
char c[400]="";
int main(){
printf("Количество столбцов: ");
scanf("%d", &n1);
printf("Количество строк: ");
scanf("%d", &n2);
if (n1%2==0){
 while (n1/2!=0){
  strcat(a, n3);
  strcat(b, n4);
  n1-=2;
 }
strcat(a, "\n");
strcat(b, "\n");
}
else{
 while ((n1-1)/2!=0){
  strcat(a, n3);
  strcat(b, n4);
  n1-=2;
 }
strcat(a, "#\n");
strcat(b, "_\n");
}
if (n2%2==0){
 while (n2/2!=0){
  strcat(c, a);
  strcat(c, b);
  n2-=2;
 }
}
else{
 while((n2-1)/2!=0){
  strcat(c, a);
  strcat(c, b);
  n2-=2;
 }
strcat(c, a);
}
printf("%s", c);
return 0;
}
