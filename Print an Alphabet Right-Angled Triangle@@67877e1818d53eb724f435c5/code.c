#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i=1; i<=a; i++){
        int n=1;
        for(int j=1; j<=a; j++){
            int d=n+64;
            char ch=(char)d;
            printf("%c", ch);
            n++;
        }printf("\n");
    }
    return 0;
}