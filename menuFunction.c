#include <stdio.h>
void main(){
    system("cls");
    int num1, num2, sum, option;
    
    printf("Choose Your Option\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplier\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter Option:");
    scanf("%d", &option);

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    sum = addition(num1, num2);
    printf("sum = %d", sum);
}

int addition(int n1, int n2){
    return n1+n2;
}