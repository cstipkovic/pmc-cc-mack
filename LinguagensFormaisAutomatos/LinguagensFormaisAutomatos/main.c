//Ana Carolina dos Santos Silva, TIA: 31525962
//Clauber Pereira Stipkovic Halic, TIA:
//Michelle Faifer dos Santos, TIA: 31581463
//Piera Carolina Marchesini Dutra, TIA: 31581773

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    int i, tam = 0;
    char entrada[INT16_MAX];
    
    
    i = 0;
    goto Q0;
Q0:
    if (i == tam) {
        printf("Entrada não aceita");
        exit(0);
    }
    if ((int)entrada[i] ) {
        goto Q1;
    } else if (<#condition#>) {
        goto Q2;
    } else {
        goto Q5;
    }
    
Q1:
    if (i == tam) {
        printf("Entrada não aceita");
    }
    if (<#condition#>) {
        goto Q2;
    } else {
        goto Q5;
    }
    
Q2:
    if (i == tam) {
        printf("Entrada aceita");
    }
    if (<#condition#>) {
        goto Q2;
    } else if (<#condition#>) {
        goto Q3;
    } else {
        goto Q5;
    }
    
Q3:
    if (i == tam) {
        printf("Entrada não aceita");
    }
    if (<#condition#>) {
        goto Q4;
    } else {
        goto Q5;
    }
    
Q4:
    if (i == tam) {
        printf("Entrada aceita");
    }
    if (<#condition#>) {
        goto Q4;
    } else {
        goto Q5;
    }
    
Q5:
    if (i == tam) {
        printf("Entrada não aceita");
    }
    goto Q5;
    
    
}

