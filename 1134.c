#include<stdio.h>

int main() {
    int a, al = 0, ga = 0, di = 0;
    
    while (1) {
        scanf("%d", &a);
        
        if (a == 1)
            al++;
        else if (a == 2)
            ga++;
        else if (a == 3)
            di++;
        else if (a == 4)
            break;
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", al);
    printf("Gasolina: %d\n", ga);
    printf("Diesel: %d\n", di);
    
    return 0;
}
