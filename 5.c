#include<stdio.h>
#include<stdlib.h>

int main(){
 int n,*p;
 printf("Enter the number of data :");
 scanf("%d",&n);
 p=(int *)malloc(n*sizeof(int));
 for(int i=0;i<n;i++)
 scanf("%d",p+i);
 int sum=p[0];
 printf("sum of ");
 printf("%d ",p[0]);
 for(int i=1;i<n;i++){
    printf("+ %d ",p[i]);
    sum+=p[i];
 }
 printf(" is : %d",sum);
 free(p);
 return 0;
}


