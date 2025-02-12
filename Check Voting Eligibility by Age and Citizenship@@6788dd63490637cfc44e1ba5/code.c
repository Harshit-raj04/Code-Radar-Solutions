#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    if(a>=18){
        if(b==1){
            printf("Eligible");
        }
    }
    else if(a<18){
        printf("Not Eligible");
    }
    return 0;
}