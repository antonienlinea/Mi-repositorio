#include<stdio.h>

int main(){

    int a, b, result;

    printf("\tIngrese dos numeros para realizar la suma\n");
    printf("Numero 1: ");
    scanf("%d", &a);
    printf("Numero 2: ");
    scanf("%d", &b);

    result = a+b;

    printf("El resultado de la suma es %d", result);

    getch();

    return 0;
}