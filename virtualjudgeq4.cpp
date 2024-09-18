#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int solvable = 0;
void parseInputString(char * charBuffer){
    unsigned int counter = 0;
    if (*charBuffer == '1') {
        counter++;
    }
    if (*(charBuffer + 2) == '1') {
        counter++;
    }
    if (*(charBuffer + 4) == '1') {
        counter++;
    }
    if (counter >= 2) {
        solvable++;
    }
}

int main() {
    int size = 0;

    char *charBuffer = NULL;

    size_t lense = 0;

    scanf("%d", &size);
    for (int i = 0; i <= size; i++) {
        int read = getline(&charBuffer, &lense, stdin);
        if (-1 == read) {
            printf("nothing read.");
            break;
        }
        /*
        if (strlen(charBuffer) -1 != 5) {
            printf("Incorrect input.");
        }
        */
        parseInputString(charBuffer);
        free(charBuffer);
        charBuffer = NULL;
    }

    printf("%d", solvable);
    return 0;
}