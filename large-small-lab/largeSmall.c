//
//  largeSmall.c
//  large-small-lab
//
//  Created by Shana Moore on 9/26/17.
//  Copyright © 2017 Shana Moore. All rights reserved.
/*  Write a C program which includes function, comapre(), that prompts the user to 
    input four integers and calculated and displays the largest and smallest of the 
    integers. Be sure that the user prompts as well as the four integegers input into 
    the program are displayed in the output file */

#include <stdio.h>
FILE *fp;

int compare(void); // function prototype

int main(void) {
    // Declare variables with appropriate data types
    int i = 0;
    
    fp = NULL;
    
    // Open file and call function, that will output to file
    fp = fopen("csis.txt", "w");
    for (i = 1; i <= 4; ++i){
        compare();
    }
    
    // Close file
    fclose(fp);
    return 0;
}

int compare(void){
    // Declare variables with appropriate data types
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, largest_number = 0, smallest_number = 0;
    
    // Get integers from user
    printf("Welcome to Compare! Please enter your first number:  ");
    fprintf(fp, "Welcome to Compare! Please enter your first number:  \n");
    scanf("%d", &num1);
    fprintf(fp, "The user entered: %d \n", num1);
    
    printf("Please enter your second number:  ");
    fprintf(fp, "Please enter your second number:  \n");
    scanf("%d", &num2);
    fprintf(fp, "The user entered: %d \n", num2);

    printf("Please enter your third number:  ");
    fprintf(fp, "Please enter your third number:  \n");
    scanf("%d", &num3);
    fprintf(fp, "The user entered: %d \n", num3);
    
    printf("Please enter your fourth number:  ");
    fprintf(fp, "Please enter your fourth number:  \n");
    scanf("%d", &num4);
    fprintf(fp, "The user entered: %d \n", num4);
    
    // Assign variables
    largest_number = num1;
    smallest_number = num1;
    
    // Calculate the largest and smallest of the integers
    if(num2 > largest_number){
        largest_number = num2;
    }
    if(num3 > largest_number){
        largest_number = num3;
    }
    if(num4 > largest_number){
        largest_number = num4;
    }
    
    if(num2 < smallest_number){
        smallest_number = num2;
    }
    if(num3 < smallest_number){
        smallest_number = num3;
    }
    if(num4 < smallest_number){
        smallest_number = num4;
    }
    
    // Display largest and smallest of the integer
    printf("\nOut of the given numbers: %d, %d, %d, %d\nThe largest number is %d, and the smallest number is %d.\n\n", num1, num2, num3, num4, largest_number, smallest_number);
    fprintf(fp, "\nOut of the given numbers: %d, %d, %d, %d\nThe largest number is %d, and the smallest number is %d.\n\n", num1, num2, num3, num4, largest_number, smallest_number);
    
    return 0;
}
