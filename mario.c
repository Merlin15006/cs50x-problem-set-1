#include<stdio.h>
#include<cs50.h>
int main(void){
    int num;
    do{
     num = get_int("Height : ");
    }
    while(num<0);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=(num-i);j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("#");
        }
        printf("\n");
    }
}
