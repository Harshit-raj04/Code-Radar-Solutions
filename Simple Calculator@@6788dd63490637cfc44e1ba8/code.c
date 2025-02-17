#include <stdio.h>

int main() {
    int num1, num2;
    char a;
    
    // Taking input
    if (scanf("%d %d %c", &num1, &num2, &a) {
        printf("error\n");
        return 1;
    }
    
    // Performing calculation based on operator
    if (a == '+') {
        printf("%d\n", num1 + num2);
    } else if (a == '-') {
        printf("%d\n", num1 - num2);
    } else if (a == '*') {
        printf("%d\n", num1 * num2);
    } else if (a == '/') {
        if (num2 == 0) {
            printf("error\n");
        } else {
            printf("%d\n", num1 / num2);
        }
    } else {
        printf("error\n");
    }
    
    return 0;
}
