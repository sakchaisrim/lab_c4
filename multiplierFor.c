#include <stdio.h>
void main(){
    system("cls");
    int i, num;
    i =1;
    // i (12)

    printf("Enter num: ");
    scanf("%d", &num);

    // for (i = 1; i < 13; i++)
        
    // while (i<13)
    // {
    //     printf("%d x %d = %d\n", num, i, i*num);
    //     i++;
    // }
    do
    {
        printf("%d x %d = %d\n", num, i, i*num);
        i++;
    } while (i<13);
    
    
}