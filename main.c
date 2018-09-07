/*  This program allows any user to enter n numbers,
    calculate and print the average of the entered numbers
    Author: Hugo Aguirre
    Date: September 6, 2018
    */


#include <stdio.h>

int main() {


    //Variable declaration
    double suma = 0;
    int num;
    double k = 0;
    double pr;
    int q;


    //Here we ask the user to input n numbers
    printf("Enter a sequence of numbers (use 0 to exit the sequence):\n");

    //Then we calculate the sum and the average of those numbers
    do{
         scanf("%i", &num);
         suma = suma + num;
         k++;

     } while (num!=0);

     q = (int) (k - 1);
     pr = suma / q;


     //we print the total of numbers that were processed to obtain the average
     //and after that we print the average of the numbers
     printf("The entered numbers are: %i\n",q);
     printf("The average is: %lf", pr);

    return 0;
}