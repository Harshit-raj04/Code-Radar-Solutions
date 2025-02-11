#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a==b && b==c && a==c){
        printf("Equilateral");
    }
    if(a!=b && b!=c && c!=a){
        printf("Scalene");
    }
    if(a==b || c==a){
        printf("Isosceles");
    }
    return 0;
}