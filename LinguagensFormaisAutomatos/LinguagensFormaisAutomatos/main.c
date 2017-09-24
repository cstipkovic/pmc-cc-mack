//Ana Carolina dos Santos Silva, TIA: 31525962
//Clauber Pereira Stipkovic Halic, TIA: 
//Michelle Faifer dos Santos, TIA: 31581463
//Piera Carolina Marchesini Dutra, TIA: 31581773

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int i, input;
    unsigned long tam;
    char str[INT16_MAX];
    
    //Input to test the automata - using the floating point with . (dot) not , (comma)
    strcpy(str, "-124234.57237913");
    
    tam = strlen(str);
    
    i = 0;
    goto Q0;
    
/*Initial state, q0, can go to:
 q1 if reads a number
 q2 if the first input is a minus sinal
 q5 if it's something else*/
Q0:
    /*If all the word has been read, print a error message, because it's not a
     final state*/
    if (i == tam) {
        printf("Error, invalid input");
        exit(0);
    }
    
    /*Transform the string in a integer, using ASCII table*/
    input = (int)str[i];
    
    i++;
    
    /*The numbers are 48 until 57 in ASCII and the minus sinal is 45*/
    if (input >= 48 && input <= 57) {
        goto Q1;
    } else if (input == 45) {
        goto Q2;
    } else {
        goto Q5;
    }
 
    /*q1 can go to:
     q2 if reads a number
     q5 if it's something else*/
Q1:
    if (i == tam) {
        printf("Error, invalid input");
        exit(0);
    }
    
    input = (int)str[i];
    
    i++;
    
    if (input >= 48 && input <= 57) {
        goto Q2;
    } else {
        goto Q5;
    }
    
    /*The final state, q2, can go to:
     q2 if reads a number
     q3 if reads a dot to separate the floating point number
     q5 if it's something else*/
Q2:
    if (i == tam) {
        printf("Success!");
        exit(0);
    }
    
    input = (int)str[i];
    
    i++;
    
    /*The dot used to express a float number is 46 in ASCII table*/
    if (input >= 48 && input <= 57) {
        goto Q2;
    } else if (input == 46) {
        goto Q3;
    } else {
        goto Q5;
    }
    
    /*q3 can go to:
     q4 if reads a number
     q5 if it's something else*/
Q3:
    if (i == tam) {
        printf("Error, invalid input");
        exit(0);
    }
    
    input = (int)str[i];
    
    i++;
    
    if (input >= 48 && input <= 57) {
        goto Q4;
    } else {
        goto Q5;
    }
    
    /*The final state, q4, can go to:
     q4 if reads a number
     q5 if it's something else*/
Q4:
    if (i == tam) {
        printf("Success!");
        exit(0);
    }
    
    input = (int)str[i];
    
    i++;
    
    if (input >= 48 && input <= 57) {
        goto Q4;
    } else {
        goto Q5;
    }
    
    /*The error state, q5, go to nowhere.
     This state can receive transactions from any state of the automata.*/
Q5:
    if (i == tam) {
        printf("Error, invalid input");
        exit(0);
    }
    i++;
    goto Q5;
    
}

