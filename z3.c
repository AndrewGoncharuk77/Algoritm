#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    switch(a){
        case 1:
            printf("F");
            break;
        case 2:
            printf("D");
            break;
        case 3:
            printf("C");
            break;
        case 4:
            printf("B");
            break;
        case 5:
            printf("A");
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}
