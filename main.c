#include <stdio.h>
#include <stdlib.h>
#include "func.h"
int main(){
 struct fridge *arr=NULL;
 int n=0;
 int stop=0;
 while(stop!=1){
  int key;
  printf("1-create, 2-read, 3-print 4-search\n");
  scanf("%d",&key);
  switch(key){
   case 1:
    create(&arr,&n);
    if(arr)
     write(arr,n);
   break;
   case 2:
    read(&arr, &n);
    if(!arr)
     printf("read error\n");
    else
     printf("loaded %d\n",n);
   break;
   case 3:
    for(int i=0; i<n; i++)
     printf("%s %d %d\n", arr[i].prod, arr[i].exp_date, arr[i].weight);
   break;
   case 4:
    search(arr, n);
   default:
    stop=1;
    break;
 }
} 
if(arr)
 free(arr);
return 0;
}
