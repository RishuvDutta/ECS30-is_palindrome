/*
 * is_palindrome.c
 * Rishi Dutta 912790628
 * The user inputs a string of no more than 30 characters. Then the program checks
 * if the string is a palindrome or not.
 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    char input[30];	
    int length = 0;
    printf("Enter a string to test: ");
    scanf("%s", &input); //user inputs a string to be checked
    while(input[length] != '\0'){
        length++; //increases length of string after a character is entered
    }	
    for (int i = 0; i < length; i++){ 
        if (input[i] != input[length-1-i]){ //this loop validates if the string is not a palindrome
            printf("%s is not a palindrome\n", input);
	    return 0;
	}
    }
    printf("%s is a palindrome\n", input);
    return 0;
}

		

