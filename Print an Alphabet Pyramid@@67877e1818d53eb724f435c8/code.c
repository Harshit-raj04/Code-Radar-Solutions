#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int n=1;
    for (int i=1; i<=a; i++){
        for(int k=1; k<=a-i; k++){
                printf(" ");
            }
            int d=a+64;
            char ch=(char)d;
            for(int j=1; j<=n; j++){
                printf("%c", ch);
            }
            
        n=n+2;
        printf("\n");
    }
    return 0;
}