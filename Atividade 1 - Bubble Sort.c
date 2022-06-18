#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int TAMANHO = 10;
    int numeros[TAMANHO];   //Vetor com os n�meros
    int i, temp, contador;

    printf("Digite 10 n�meros (digitar e pressionar enter) para serem inseridos no vetor a ser ordenado\n");
    for (i = 0; i < TAMANHO; i++)
        {scanf("%d", &numeros[i]);}

    printf("Voc� digitou:\n");
    for (i = 0; i < TAMANHO; i++){
        printf("%4d", numeros[i]);}

    //Bubble sort:
    for (contador = 1; contador < TAMANHO; contador++){
        for ( i = 0; i < TAMANHO - 1; i++){
            if (numeros[i] > numeros [i + 1]){
                temp = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = temp;
            }
        }
    }

    printf("\nN�meros em ordem crescente:\n");
    for (i = 0; i < TAMANHO; i++){
        printf("%4d", numeros[i]);}

    return 0;

}
