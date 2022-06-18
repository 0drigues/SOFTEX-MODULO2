#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

int main(){

    int *ponteiro;

    ponteiro = (int *) malloc(5 * sizeof(int));

    ponteiro = (int *) realloc(ponteiro, 22 * sizeof(int));

    void free(void * ponteiro);

    return 0;
}
