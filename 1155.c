#include<stdio.h>
int main(){

    float i,sum =1;
    for(i=2; i<=100; i++){

        sum += 1/i;
    }
    printf("%.2f\n",sum);
    return 0;
}