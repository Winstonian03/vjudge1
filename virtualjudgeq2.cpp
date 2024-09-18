#include <stdio.h>

int main(){
    int weight;
    int total = 0;
    scanf("%d", &weight);

    if (3 <= weight && weight <= 100) {
        total = weight % 2;
        if (total == 0) {
            printf("YES");
        } else {
            printf("NO");
        }
    } else if (weight == 1 || weight == 2) {
        printf("NO");
    } else {
        printf("Enter a new weight between 1 and 100");
    }     

    return 0;
}