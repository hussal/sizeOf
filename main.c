//  main.c
//  sizeOf
//  Created by Hussein Saleh on 9/22/21.

#include <stdio.h>

int main() {
    printf("Welcome to the size of program!\n\n");
    
    printf("Integer                     %ld bytes\n", sizeof(int));
    printf("Long Integer                %ld bytes\n", sizeof(long int));
    printf("Short Integer               %ld bytes\n", sizeof(short int));
    printf("Unsigned Integer            %ld bytes\n", sizeof(unsigned int));
    printf("Unsigned Short Integer      %ld bytes\n", sizeof(unsigned short int));
    printf("Character                   %ld bytes\n", sizeof(char));
    printf("Floating Point              %ld bytes\n", sizeof(float));
    printf("Double Precision            %ld bytes\n\n", sizeof(double));
    
    return 0;
}
