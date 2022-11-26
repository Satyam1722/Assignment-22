#include<stdio.h>
#include<stdlib.h>

int main(){
 int n,*p;
 printf("Enter the number of data :");
 scanf("%d",&n);
 p=(int *)malloc(n*sizeof(int));
 for(int i=0;i<n;i++)
 scanf("%d",p+i);
 int max=p[0];

 for(int i=1;i<n;i++){
    if(max<p[i])
    max=p[i];
 }
 printf("max : %d",max);
 free(p);
 return 0;
}



