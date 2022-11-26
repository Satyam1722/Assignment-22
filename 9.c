#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
void *p=NULL;
printf("enter the byte for allocation : ");
scanf("%d",&n);
p=(int *)malloc(n);
if(p==NULL){
    printf("Memory allocation is failed\n");
}
else
    printf("Memory allocation is passed\n");

    return 0;
}
