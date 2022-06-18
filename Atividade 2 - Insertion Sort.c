#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

void insertion_sort(int numeros[], int n){
    int i, j, temp;

    for (i = 1; i < n; i++){
        temp = numeros[i];
        j = i - 1;

    while(j>=0 && temp <= numeros[j]){
        numeros[j+1] = numeros[j];
        j = j-1;}
        numeros[j+1] = temp;
    }
}

void impressao(int numeros[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("%4d", numeros[i]);}

    printf("\n");
}


int main(){
    setlocale(LC_ALL, "Portuguese");

    int numeros[] = {35,55,73,69,15,17,67,175,7,97,3,5,63,37,45,39,77,133,245,13,25,357,57,355,137,257,453,139,83,1};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    printf("Vetor antes do Insertion Sort ser aplicado:\n");
    impressao(numeros, n);

    insertion_sort(numeros, n);
    printf("Vetor após a aplicação do Insertion Sort:\n");

    impressao(numeros, n);

    return 0;}

