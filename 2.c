#include<stdio.h>
#include<stdlib.h>

int main(){
 int n,*p;
 printf("Enter the number of data :");
 scanf("%d",&n);
 p=(int *)malloc(n*sizeof(int));
 for(int i=0;i<n;i++)
 scanf("%d",p+i);
 int avg=0;
 for(int i=0;i<n;i++){
    avg+=p[i];
 }
 printf("avg is %d",avg/n);
 free(p);
 return 0;
}
