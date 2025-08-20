#include<stdio.h>
#include<cs50.h>
int main(void){
    int ip,s1,s2,s3,s4,coins=0;
    do{
    ip = get_int("Change owed: ");
    }while(ip<0);
    while(ip>=25){
        s1=ip-25;
        coins++;
        ip=s1;
    }
    while(ip>=10){
        s2=ip-10;
        coins++;
        ip=s2;
    }
    while(ip>=5){
        s3=ip-5;
        coins++;
        ip=s3;
    }
    while(ip>=1){
        s4=ip-1;
        coins++;
        ip=s4;
    }
    printf("%i\n",coins);
}
