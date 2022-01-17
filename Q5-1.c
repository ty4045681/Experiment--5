// Q5-1.c
#include<stdio.h>
extern int etext,edata,end;
int main() {
    printf("etext:%6x \t edata:%6x \t end:%6x \n",&etext,&edata,&end); 
}