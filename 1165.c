#include<stdio.h>

int main(){

    int n,x,i;
    scanf("%d",&n);

    while(n--){
        int flag = 1;
        scanf("%d", &x);

        for(i=2; i<x; i++){
            if(x%i == 0){
                flag = 0;
            
            }
        }
        if (flag){
            printf("%d eh primo\n",x);
        }
        else{
            printf("%d nao eh primo\n",x);
        }

    }

return 0;

}