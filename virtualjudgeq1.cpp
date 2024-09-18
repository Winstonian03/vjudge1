#include <stdio.h>

int main(){
    int SIZE;
    int total = 0;
    
    //scans for size of arr
    scanf("%d", &SIZE);
    int numArr[SIZE];
    
    //scans elements into arr
    for (int i = 0; i < SIZE; i++){
        scanf("%d", &numArr[i]);
    }
    
    //totals elements in the arr
    for (int i = 0; i < SIZE; i++){
        total = total + numArr[i];
    }

    printf("%d", total);

    return 0;
}