#include <stdio.h>
#include <ctype.h>

int main() {
    char x;
    scanf("%c", &x);

    if (x >= '0' && x <= '9') {
        printf("Digit");
    } 
    else if (isalpha(x)) {
        x = tolower(x);
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    } 
    else {
        printf("Special Character");
    }

    return 0;
}
