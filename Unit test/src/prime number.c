#include <stdio.h>
#include<stdbool.h>
#include "E:\CB\Unit test\inc\pno.h"
bool check(int num){int i,j=0;
    for (i = 2; i <= num/ 2; i++)
    {
        if (num % i == 0) {j=1;break;}
    }

    if (num<=1) {if(num==1){
        return false;
    }
               else{return false;}//fail case}
              }
    else {
        if (j == 0)
            return true;//It is a prime number
        else
            return false;//It is not a prime number
         }
}
