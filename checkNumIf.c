#include <stdio.h>
void main(){
    system("cls");
    int num;

    printf("Enter integer num: ");
    scanf("%d", &num);

    if(num > 0) 
        printf("Number is Positive");
    else if(num == 0)
        printf("Number is zero");
    else
        printf("Number is Negative");
    
}