#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i=a; i>=1; i--){
        int n=1;
        for(int j=1; j<=i; j++){
            int d=n+64;
            char ch=(char)d;
            printf("%c ", ch);
            n++;
        }printf("\n");
    }
    return 0;
}