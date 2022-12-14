/* 
This program prints info related to a set of input integers.
*/

#include <stdio.h>
#include "numbers.h"

int main(){
    int max = 5;
    int numbers[max];
    int count = getNumbers(numbers, max);
    if (count > 0){
        printf("\nThe input numbers are\n");
        printNumbers(numbers, count);
        printf("The sum is %d\n", 
               sum(numbers, count));        
        printf("The average is %f\n", 
               average(numbers, count));
    }
    else
        printf("\nNo numbers were entered\n");
}

