#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a>0){
        if(a/1==a && a/a==1){
            printf("Prime");
        }
        else if(a%2==0 || a%3==0 || a%7==0|| a%5==0){
            printf("Not Prime");
        } 
    }
        
    return 0;

}