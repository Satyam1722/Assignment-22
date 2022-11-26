#include<stdio.h>
#include<stdlib.h>

int main(){
 int n,*p;
 printf("Enter the number of data :");
 scanf("%d",&n);
 p=(int *)malloc(n*sizeof(int));
 for(int i=0;i<n;i++)
 scanf("%d",p+i);
 int sum=0;
 for(int i=0;i<n;i++){
    sum+=p[i];
 }
 printf("sum is %d",sum);
 free(p);
 return 0;
}

