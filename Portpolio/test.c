#include<stdio.h>
int fun(int ,int*);
int main(void){
    int a=5, b=6;
    int *p=&a, **q;
    *p=20;
    q=&p;
    fun(a, &b);
    *p=30;
    printf("%d %d",a,b);
    return;
}

int fun(int x, int *p){
    *p=x;
    x=10;
}