#include<stdio.h>

int main(){
    int n,i,sum;
    scanf("%d",&n);
    while(n--){
        sum = 0;
        int x,y;
        scanf("%d %d",&x,&y);
        if(x%2 == 0){
            x++;
        }
        for(i = 0; i<y; i++){
            sum += x;
            x += 2;
        }
        printf("%d\n",sum);
    }
    return 0;
}