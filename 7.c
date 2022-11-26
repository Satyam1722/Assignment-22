#include<stdio.h>

void f(){
int n,*p;
 printf("Enter the number of data :");
 scanf("%d",&n);
 p=(int *)malloc(n*sizeof(int));
 for(int i=0;i<n;i++)
 scanf("%d",p+i);

}

int main(){
f();
printf("memory leak\n");
return 0;
}
