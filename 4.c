#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
 int n;
 char *p;
 printf("enter the length of string\n");
 scanf("%d",&n);
 p=(char *)malloc(n*sizeof(char));
 printf("enter the string : \n");
 scanf("%s",p);
 printf("string is %s",p);
 free(p);
 return 0;
}

