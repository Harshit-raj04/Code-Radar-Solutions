#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int result = a | b;
    printf("%d | %d = %d\n",&a,&b);
    
    return 0;
}