#include <stdio.h>
int main() {
    int num, i, j = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 2; i <= num/ 2; i++)
    {
        if (num % i == 0) {j=1;break;}
    }

    if (num<=1) {if(num==1){printf("Neither prime nor Composite number");}
               else{printf("Invalid input");}//fail case}
              }
    else {
        if (j == 0)
            printf("True");//It is a prime number
        else
            printf("False");//It is not a prime number
         }

    return 0;
}
