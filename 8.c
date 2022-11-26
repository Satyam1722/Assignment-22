#include<stdio.h>

int* f(){
int n;
n=50;
return &n;

}

int main(){
int *p=f();
*p=34;
printf("%d",p);

return 0;
}

