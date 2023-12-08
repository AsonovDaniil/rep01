#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#include <string.h>
void write(struct fridge *arr, int n){
 if(n<=0)
  return;
 FILE *f=fopen("a.txt", "w");
 if(!f)
  return;
 fprintf(f, "%d\n", n);
 for(int i=0; i<n; i++)
 fprintf(f, "%s %d %d\n", arr[i].prod, arr[i].exp_date, arr[i].weight);
 fclose(f);
}
void read(struct fridge **arr, int *n){
 FILE *f=fopen("a.txt", "r");
 if(!f)
  return;
 if (fscanf(f, "%d", n)!=1)
  return;
 if(*n<=0)
  return;
 *arr=(struct fridge*)calloc(*n, sizeof(struct fridge));
 for(int i=0; i<*n; i++)
  fscanf(f, "%s %d %d", (*arr)[i].prod, &(*arr)[i].exp_date, &(*arr)[i].weight);
  fclose(f);
}
void create(struct fridge **arr, int *n){
 printf("n=");
 scanf("%d", n);
 if(*n<=0)
  return;
 *arr=(struct fridge*)calloc(*n, sizeof(struct fridge));
 for(int i=0; i<*n; i++){
  printf("product= ");
  scanf("%s", (*arr)[i].prod);
  printf("expiry date= ");
  scanf("%d", &(*arr)[i].exp_date);
  printf("weight= ");
  scanf("%d", &(*arr)[i].weight);
 }
}
void search(struct fridge *arr, int n){
 FILE *f=fopen("a.txt", "r");
 if(!f)
  return;
 int key;
 int c;
 printf("1-product, 2-exp_date, 3-weight\n");
 scanf("%d", &key);
 switch(key){
  case 1:
   char s_prod[40];
   printf("product= ");
   scanf("%s", s_prod);
   c=0;
   for(int i=0; i<n; i++){
    if (strcmp(arr[i].prod, s_prod)==0){
     printf("%s %d %d\n", arr[i].prod, arr[i].exp_date, arr[i].weight);
     c+=1;
    }
   }
   if (c==0)
    printf("no match\n");
   break;
  case 2:
  int s_exp_date;
  printf("expiry date= ");
  scanf("%d", &s_exp_date);
  c=0;
  for(int i=0; i<n; i++){
   if(arr[i].exp_date==s_exp_date){
    printf("%s %d %d\n", arr[i].prod, arr[i].exp_date, arr[i].weight);
    c+=1;
   }
  }
  if (c==0)
   printf("no match\n");
  break;
  case 3:
  int s_weight;
  printf("weight= ");
  scanf("%d", &s_weight);
  c=0;
  for(int i=0; i<n; i++){
   if(arr[i].weight==s_weight){
    printf("%s %d %d\n", arr[i].prod, arr[i].exp_date, arr[i].weight);
    c+=1;
   }
  }
  if (c==0)
   printf("no match\n");
  break;
  default:
   break;
 }
}
