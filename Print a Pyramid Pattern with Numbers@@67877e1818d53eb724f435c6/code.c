#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int n=1;
    for (int i=1; i<=a; i++){
        for(int k=1; k<=a-i; k++){
                printf(" ");
            }
            for(int j=1; j<=n; j++){
                printf(" %d",j);
            }
            
        n++;
        printf("\n");
    }
    return 0;
}