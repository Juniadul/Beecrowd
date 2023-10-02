#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        float x,y;
        scanf("%f %f",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1f\n",x/y);
        }
    }
}