#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int j;
    int c[10] = {0};
    size_t lense = 0;

    char *charBuffer = NULL;
    char *charPtr = NULL;

    int read = getline(&charBuffer, &lense, stdin);
    if (-1 == read) {
        printf("nothing read.");
        exit(0);
    }
    
    charPtr = charBuffer;
    
    for (j = 0; j < (strlen(charBuffer) - 1) && j < 1000; j++, charPtr++){
        switch(*charPtr){
            case '0':
                c[0]++;
                break;
            case '1':
                c[1]++;
                break;
            case '2':
                c[2]++;
                break;
            case '3':
                c[3]++;
                break;
            case '4':
                c[4]++;
                break;
            case '5':
                c[5]++;
                break;
            case '6':
                c[6]++;
                break;
            case '7':
                c[7]++;
                break;
            case '8':
                c[8]++;
                break;
            case '9':
                c[9]++;
                break;
        }
    }

    for (j = 0; j <= 9; j++){
        printf("%d ", c[j]);
    }

    //freeing memory allocated by getline()
    free(charBuffer);
    
    return 0;
}