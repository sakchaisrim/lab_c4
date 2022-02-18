/* 
1.
enter a no: 6
Odd no. of 6 terms are :-
1 3 5 7 9 11
*/

#include <stdio.h>
void main(){
    system("cls");

    int i, nTerm;

    printf("Enter nTerm= ");
    scanf("%d", &nTerm);

    printf("Odd no. of %d terms are : \n", nTerm);

    for(i=1; i<= 2*nTerm; i++){
        if(i%2 == 0)
            continue;
        else
            printf("%d  ", i);
    }

    // if(nTerm%2 == 0)
    //     printf("Even");
    // else    
    //     printf("Odd");

}