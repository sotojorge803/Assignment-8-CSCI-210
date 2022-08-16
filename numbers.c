/* Name: Jorge Soto-Ventura
File: numbers.c
Implementation file for numbers, getNumbers, printNumbers, sum, and average functions.
*/
#include <stdio.h>
#include "numbers.h"
/* Prefactory Comments
int getNumbers(int arr[], int max) // Requests the numbers to be used
int printNumbers(int arr[], int count) // Prints the numbers to be used
int sum(int arr[], int count) // Prints out the sum of the numbers
int average(int arr[], int count) //Returns the average of the values 
*/
int factorial(int n); // Prototype shows the function specs
// Requests the numbers to be used 
int getNumbers(int arr[], int max){
    int count = 0;
    int userInput = 0;
    while (count<max){
        printf("\n Enter a number or 0 to stop: ");
        scanf("%d", &userInput);
        if (arr[count] == 0 && userInput == 0){
            printf("No numbers were entered \n");
            break;
        }
        else if (userInput == 0) {
            break;
        }
        else if ((count + 1) == max){
            arr[count] = userInput;
            count++;
            printf("Maximum number of numbers has been entered \n");
            break;
        }
        else {
            arr[count] = userInput;
            count++;
        }
    }
    return count;
}
// Prints the numbers to be used
int printNumbers(int arr[], int count){
    for (int i =0; i<count; i++){
        printf("%d \n", arr[i]); 
    }
    return 0;

}
// Prints out the sum of the numbers
int sum(int arr[], int count){
    int sum = 0;
    for (int i =0; i<count; i++){
        sum = sum + arr[i];
    }
    return sum;
}
// Returns the average of the values
double average(int arr[], int count){
   int asum = 0;
   asum = sum(arr, count);
   double average = (asum / count);
   return average;
}